#include <DHT.h>
#include <WiFi.h>
#include <PubSubClient.h>

#define DHTPIN 15          // Pino digital onde o sensor DHT22 está conectado
#define DHTTYPE DHT22      // Definir como DHT22
DHT dht(DHTPIN, DHTTYPE); // Inicializar o sensor DHT

const char* ssid = "Wokwi-GUEST";  // Nome da rede Wi-Fi
const char* password = "";  // Senha vazia, pois o Wi-Fi não requer senha
const char* mqtt_server = "test.mosquitto.org";  // Broker MQTT do Mosquitto

WiFiClient espClient;
PubSubClient client(espClient);

const int pinPot = 34;  // Pino onde o potenciômetro está conectado
const int pinLDR = 32;  // Pino onde o LDR está conectado (pino analógico)

void setup() {
  Serial.begin(115200);  // Inicializa o Serial Monitor
  pinMode(pinPot, INPUT);  // Define o pino do potenciômetro como entrada
  pinMode(pinLDR, INPUT);  // Define o pino do LDR como entrada analógica

  // Inicializa o DHT22
  dht.begin();

  // Conecta ao Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("Conectado ao Wi-Fi!");

  // Conecta ao broker MQTT do Mosquitto
  client.setServer(mqtt_server, 1883);
  
  while (!client.connected()) {
    Serial.print("Tentando conectar ao broker MQTT...");
    if (client.connect("ESP32_Client")) {  // Conectando com o nome "ESP32_Client"
      Serial.println("Conectado ao Broker MQTT!");
    } else {
      Serial.print("Falha, rc=");
      Serial.print(client.state());  // Exibe o código de erro se falhar
      delay(2000);  // Espera 2 segundos antes de tentar novamente
    }
  }
}

void loop() {
  // Leitura do potenciômetro
  int valorPot = analogRead(pinPot);  // Lê o valor do potenciômetro
  char msgPot[50];
  sprintf(msgPot, "Valor Potenciômetro: %d", valorPot);  // Formata a mensagem

  // Leitura do DHT22
  float temperatura = dht.readTemperature(); // Lê a temperatura
  float umidade = dht.readHumidity(); // Lê a umidade

  // Verificação de falha na leitura do DHT22
  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Falha na leitura do DHT!");
    return;
  }

  char msgTemp[50];
  char msgHum[50];
  sprintf(msgTemp, "Temperatura: %.2f C", temperatura);
  sprintf(msgHum, "Umidade: %.2f %%", umidade);

  // Leitura do LDR (Valor de luminosidade)
  int valorLDR = analogRead(pinLDR);  // Lê o valor do LDR
  char msgLDR[50];
  sprintf(msgLDR, "Luminosidade: %d", valorLDR);  // Formata a mensagem

  // Publicação dos dados no broker MQTT
  client.publish("potenciometro", msgPot);  // Publica o valor do potenciômetro
  client.publish("temperatura", msgTemp);  // Publica a temperatura
  client.publish("umidade", msgHum);  // Publica a umidade
  client.publish("luminosidade", msgLDR);  // Publica o valor do LDR

  // Exibe os dados no Serial Monitor
  Serial.print("Potenciômetro: ");
  Serial.println(valorPot);
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  Serial.print("Umidade: ");
  Serial.println(umidade);
  Serial.print("Luminosidade: ");
  Serial.println(valorLDR);

  delay(1000);  // Aguarda 1 segundo antes da próxima leitura
}

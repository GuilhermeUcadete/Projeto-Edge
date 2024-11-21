Projeto de Monitoramento de Sensores com Node-RED, Wokwi e ESP32
Este projeto visa integrar sensores (potenciômetro, temperatura, umidade e luminosidade) usando o ESP32, com a visualização e controle via Node-RED. Os dados dos sensores são enviados via MQTT e processados no Node-RED, proporcionando uma solução de monitoramento e controle remoto. O projeto também utiliza o Wokwi para simulação de hardware e desenvolvimento do código.

Descrição do Projeto
Este repositório contém os seguintes componentes:

Node-RED: Fluxos para captura e visualização de dados via MQTT.
ESP32: Leitura de sensores (potenciômetro, DHT22 e LDR) e envio dos dados para o broker MQTT.
Wokwi: Simulação do hardware do ESP32 e sensores para desenvolvimento e teste.
Estrutura do Repositório
node-red-flows.json: Arquivo JSON com os fluxos do Node-RED.
wokwi/: Diretório contendo o código do ESP32 (arquivo .ino), bibliotecas e configurações para a simulação no Wokwi.
README.md: Este arquivo com as instruções e detalhes do projeto.
Requisitos
Antes de rodar o projeto, você precisará ter os seguintes programas e ferramentas instalados:

Node-RED: Para criar e executar os fluxos de integração MQTT.
Arduino IDE (ou similar): Para carregar o código no ESP32.
ESP32: Hardware para ler os sensores e enviar dados para o Node-RED via MQTT.
Wokwi: Para simulação do projeto e desenvolvimento do código do ESP32.
Dependências de Software
Node-RED: Para instalar, siga as instruções aqui.
Bibliotecas do Arduino:
DHT sensor library: https://github.com/adafruit/DHT-sensor-library
PubSubClient (para MQTT): https://github.com/knolleary/pubsubclient
Instruções de Uso
1. Configurar o ESP32
Código do ESP32:

Faça o download do código sketch.ino do diretório Wokwi.
Abra o código no Arduino IDE.
Carregue o código no seu ESP32, configurando a rede Wi-Fi e o broker MQTT (como o Mosquitto ou outro broker).
Conexão dos Sensores:

Potenciômetro: Conecte no pino analógico (por exemplo, GPIO34).
DHT22: Conecte no pino digital (por exemplo, GPIO4).
LDR: Conecte no pino analógico (por exemplo, GPIO35).
2. Configurar o Node-RED
Fluxos do Node-RED:

Importe o arquivo node-red-flows.json para o seu ambiente Node-RED.
Conecte os fluxos MQTT a tópicos como potenciometro, temperatura, umidade e luminosidade.
Configure os nós MQTT para se conectar ao mesmo broker MQTT usado pelo ESP32.
Visualização:

Use os nós debug para visualizar os dados recebidos ou configure um painel de controle para monitorar os valores dos sensores.
3. Rodando o Projeto
Rodar o Node-RED:

Após importar os fluxos, execute o Node-RED.
Verifique se os dados dos sensores estão sendo recebidos corretamente na interface do Node-RED.
Testar no Wokwi:

Abra o projeto Wokwi e faça a simulação dos sensores e do ESP32. Certifique-se de que os dados estão sendo enviados corretamente para o Node-RED via MQTT.

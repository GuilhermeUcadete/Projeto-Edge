# **Projeto de Monitoramento de Sensores com Node-RED, Wokwi e ESP32**

Este projeto visa integrar **sensores** (potenciômetro, temperatura, umidade e luminosidade) usando o **ESP32**, com a visualização e controle via **Node-RED**. Os dados dos sensores são enviados via **MQTT** e processados no Node-RED, proporcionando uma solução de monitoramento e controle remoto. O projeto também utiliza o **Wokwi** para simulação de hardware e desenvolvimento do código.

## **Descrição do Projeto**

Este repositório contém os seguintes componentes:

- **Node-RED**: Fluxos para captura e visualização de dados via **MQTT**.
- **ESP32**: Leitura de sensores (potenciômetro, DHT22 e LDR) e envio dos dados para o broker MQTT.
- **Wokwi**: Simulação do hardware do ESP32 e sensores para desenvolvimento e teste.

## **Objetivo**

O objetivo deste projeto é monitorar e visualizar os dados de sensores em tempo real. Através da integração do **ESP32** com **Node-RED**, é possível observar a leitura de sensores de **luminosidade**, **temperatura**, **umidade** e **potenciômetro**, enviando essas informações de forma contínua para o servidor MQTT, permitindo a visualização e o controle remoto dos dados.

## **Requisitos**

Antes de rodar o projeto, você precisará ter os seguintes programas e ferramentas instalados:

- **Node-RED**: Para criar e executar os fluxos de integração **MQTT**.
- **Arduino IDE** (ou similar): Para carregar o código no **ESP32**.
- **ESP32**: Hardware para ler os sensores e enviar dados para o **Node-RED** via **MQTT**.
- **Wokwi**: Para simulação do projeto e desenvolvimento do código do **ESP32**.

## **Instalação**

### **Node-RED**

1. **Instalar o Node.js**:
   - Baixe e instale o Node.js [aqui](https://nodejs.org/).
   
2. **Instalar o Node-RED**:
   - Após a instalação do Node.js, abra o terminal e execute o seguinte comando para instalar o **Node-RED**:
     ```bash
     npm install -g --unsafe-perm node-red
     ```
   
3. **Iniciar o Node-RED**:
   - No terminal, execute:
     ```bash
     node-red
     ```
   - O Node-RED estará acessível no navegador através de `http://localhost:1880`.

4. **Importar os fluxos**:
   - Vá até o arquivo `flows.json` no repositório, copie o conteúdo e cole na interface do **Node-RED**.

### **ESP32**

1. **Instalar a IDE Arduino** (ou qualquer outra IDE que suporte o **ESP32**).
   
2. **Adicionar a placa ESP32 na IDE**:
   - Abra a IDE, vá para **Arquivo > Preferências** e adicione o seguinte link no campo "URLs adicionais para gerenciadores de placas":
     ```
     https://dl.espressif.com/dl/package_esp32_index.json
     ```
   
3. **Instalar a biblioteca ESP32**:
   - Vá até **Ferramentas > Placa > Gerenciador de Placas**, busque por **ESP32** e instale.
   
4. **Carregar o código no ESP32**:
   - Abra o arquivo `sketch.ino` que contém o código do ESP32, conecte o seu **ESP32** à porta USB e faça o upload do código.

5. **Configuração de Wi-Fi e MQTT**:
   - Modifique as credenciais de Wi-Fi e MQTT no código conforme necessário.

### **Wokwi**

1. **Simulação no Wokwi**:
   - Vá até o site [Wokwi](https://wokwi.com/), crie um novo projeto e faça upload do arquivo `sketch.ino`.
   - Utilize os componentes virtuais para simular o **ESP32**, **DHT22**, **LDR**, e outros sensores.

## **Fluxos do Node-RED**

Os fluxos do Node-RED foram criados para gerenciar a entrada e visualização dos dados de sensores. Você pode importar o arquivo `flows.json` para o seu ambiente do **Node-RED** para iniciar a integração.

### **Fluxos Importantes**:

1. **Entrada de Dados do MQTT**: O **Node-RED** irá ouvir os tópicos MQTT (como `potenciometro`, `temperatura`, `umidade`, `luminosidade`) e exibir os valores na interface.
   
2. **Processamento e Visualização**: Os dados recebidos são processados e enviados para os nós de debug ou para interfaces de visualização.



# **Projeto de Monitoramento de Sensores com Node-RED, Wokwi e ESP32**

Este projeto visa integrar **sensores** (potenciômetro, temperatura, umidade e luminosidade) usando o **ESP32**, com a visualização e controle via **Node-RED**. Os dados dos sensores são enviados via **MQTT** e processados no Node-RED, proporcionando uma solução de monitoramento e controle remoto. O projeto também utiliza o **Wokwi** para simulação de hardware e desenvolvimento do código.

---

## **Descrição do Projeto**

Este repositório contém os seguintes componentes:

- **Node-RED**: Fluxos para captura e visualização de dados via **MQTT**.
- **ESP32**: Leitura de sensores (potenciômetro, DHT22 e LDR) e envio dos dados para o broker MQTT.
- **Wokwi**: Simulação do hardware do ESP32 e sensores para desenvolvimento e teste.

---

## **Objetivo**

O objetivo deste projeto é monitorar e visualizar os dados de sensores em tempo real. Através da integração do **ESP32** com **Node-RED**, é possível observar a leitura de sensores de **luminosidade**, **temperatura**, **umidade** e **potenciômetro**, enviando essas informações de forma contínua para o servidor MQTT, permitindo a visualização e o controle remoto dos dados.

---

## **Simulação com Wokwi**

### **Link para o Projeto no Wokwi**
Você pode acessar a simulação completa do projeto no Wokwi clicando [aqui](https://wokwi.com/projects/415201901151326209).

### **Descrição da Simulação**
No **Wokwi**, o projeto inclui:
- Um **ESP32** como microcontrolador principal.
- Sensores conectados:
  - **Potenciômetro**: Para simular variação de valores analógicos.
  - **DHT22**: Para leitura de temperatura e umidade.
  - **LDR**: Para medir níveis de luminosidade.
- Comunicação via **MQTT**: O ESP32 publica os dados dos sensores em tópicos MQTT simulados, prontos para serem consumidos pelo **Node-RED**.

##**Projeto de Monitoramento com ESP32, Node-RED e Wokwi**

Este projeto tem como objetivo monitorar variáveis ambientais em tempo real, utilizando o microcontrolador ESP32 e sensores como DHT22 (temperatura e umidade), LDR (luminosidade) e um potenciômetro (entrada analógica). Os dados captados são enviados via MQTT para o Node-RED, onde são processados e exibidos em um dashboard interativo.

A simulação do hardware foi feita no Wokwi, permitindo testar o funcionamento sem equipamentos físicos. Isso torna o projeto ideal para prototipagem e aprendizado.

Aplicações incluem automação residencial, monitoramento ambiental e demonstrações educacionais em IoT, destacando a integração prática entre hardware e software para soluções acessíveis e funcionais.



---

## **Instalação**

### **Node-RED**

1. **Instalar o Node.js**:  
   Baixe e instale o Node.js [aqui](https://nodejs.org/).

2. **Instalar o Node-RED**:  
   Após a instalação do Node.js, abra o terminal e execute o seguinte comando para instalar o **Node-RED**:  
   ```bash
   npm install -g --unsafe-perm node-red

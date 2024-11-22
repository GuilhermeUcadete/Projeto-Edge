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

## **Objetivo do projeto Wokwi**

O projeto busca oferecer uma solução eficiente para monitoramento remoto de variáveis ambientais e controle de sensores, utilizando tecnologias como ESP32, Node-RED e MQTT. Essa integração permite capturar dados em tempo real e apresentá-los de forma clara e acessível, tanto para simulação quanto para aplicações reais.

A base do sistema é o microcontrolador ESP32, que se comunica com sensores como um DHT22 (para medir temperatura e umidade), um LDR (para detectar luminosidade) e um potenciômetro (para simular variações de entrada analógica). Esses dados são transmitidos por meio do protocolo MQTT para o Node-RED, onde são processados e exibidos em dashboards visuais, incluindo gráficos, medidores e outros componentes interativos.

Durante a fase de desenvolvimento e testes, utilizamos o Wokwi, uma plataforma online que permite simular o funcionamento do hardware e validar o código sem a necessidade de equipamentos físicos. Essa abordagem facilita a prototipagem e reduz custos, tornando o projeto acessível para estudantes e desenvolvedores.

O objetivo principal deste trabalho é criar uma plataforma funcional e adaptável para monitoramento ambiental. Entre os possíveis usos, destacam-se:

- Monitoramento de condições climáticas em ambientes internos ou externos.
- Controle de luminosidade e temperatura em sistemas de automação residencial.
- Simulações educacionais para demonstrar conceitos de IoT (Internet das Coisas).
  
Em resumo, o projeto demonstra como a integração de tecnologias de hardware e software pode fornecer soluções práticas e acessíveis para problemas do dia a dia, além de abrir possibilidades para aplicações mais complexas no campo da automação e do monitoramento inteligente.

##**A imagem á baixo mostra o recebimentos de dados no Dashboard**

![image](https://github.com/user-attachments/assets/0ad07e13-0e9b-49e6-afb3-29d556984294)

##**A imagem á baixo mostra como está projetado o Node-RED**

![image](https://github.com/user-attachments/assets/f83bd7a9-f7d3-49ed-a904-b802acb5832c)


---


## **Instalação**

### **Node-RED**

1. **Instalar o Node.js**:  
   Baixe e instale o Node.js [aqui](https://nodejs.org/).

2. **Instalar o Node-RED**:  
   Após a instalação do Node.js, abra o terminal e execute o seguinte comando para instalar o **Node-RED**:  
   ```bash
   npm install -g --unsafe-perm node-red

# Sistema-de-SOS-para-defiecientes-com-MQTT

#Desenvolvimento e Implementação de um Sistema de Comunicação Emergencial Integrado utilizando Protocolo MQTT para Ambientes Hospitalares e Espaços Públicos  

Integrntes: Humberto Rodrigues Neto, Wesley Constantino dos Santos.
Professor: Marcelo Teixeira de Azevedo.
Universidade Presbiteriana Mackenzie (UPM) 


Resumo: Este projeto propõe uma aplicação que simula a interação entre um botão físico e um botão digital, conforme as diretrizes do protocolo MQTT. Destinado a ambientes hospitalares e espaços públicos, o sistema visa facilitar a solicitação de ajuda por meio de um botão físico acessível, complementado por uma opção remota via celular e conectividade Wi-Fi usando MQTT. Ao pressionar o botão, um sinal é enviado, acionando uma notificação luminosa para profissionais responsáveis, como médicos e enfermeiros. Essa solução inovadora proporciona uma resposta eficiente a situações de emergência, promovendo a segurança e o rápido atendimento aos usuários necessitados. 


#Introdução 

Para o projeto da matéria de Objetos Inteligentes Conectados, o presente projeto propõe o desenvolvimento de uma aplicação que simula a interação entre um botão físico e um botão digital, conforme especificações estabelecidas pelo protocolo MQTT. Este recurso visa atender às necessidades de pessoas em ambientes como quartos de hospitais ou banheiros públicos, que eventualmente podem se encontrar em situações de acidente ou necessidade de assistência, dificultando a comunicação imediata. 

A solução consiste em um botão físico de fácil alcance, proporcionando uma alternativa direta para a solicitação de auxílio. No entanto, reconhecendo a possibilidade de algumas pessoas não conseguirem alcançar o botão físico em situações emergenciais, implementamos uma solução adicional por meio de um botão virtual acessível via celular. Utilizando a conectividade Wi-Fi e o protocolo MQTT, os usuários têm a capacidade de acionar esse botão remotamente pela Internet. 

Ao pressionar o botão, um sinal é enviado e uma notificação luminosa é ativada, alertando profissionais responsáveis do outro lado, como médicos, enfermeiros ou seguranças. Essa abordagem inovadora proporciona uma resposta rápida e eficaz às necessidades de assistência, garantindo um ambiente mais seguro para os usuários que buscam ajuda em situações críticas. 


#Materiais  

Para compor o nosso projeto, segue lista de materiais, juntamente com sua descrição: 

01 Placa Arduino Node MCU – ESP 8266 – ESP-12E; 

01 Placa Protoboard Transparente 400 pontos; 

01 LED da Placa Node MCU; 

03 Jumpers Macho-Macho; 

01 Cabo USB; 

01 Botão/sensor 

01 Resistor 10k 

01 Notebook; 

Software Arduino IDE. 
 

#Método 

Este projeto propõe uma aplicação que simula a interação entre um botão físico e um botão digital, conforme as diretrizes do protocolo MQTT. Destinado a ambientes hospitalares e espaços públicos, o sistema visa facilitar a solicitação de ajuda por meio de um botão físico acessível, complementado por uma opção remota via celular e conectividade Wi-Fi usando MQTT. Ao pressionar o botão, um sinal é enviado, acionando uma notificação luminosa para profissionais responsáveis, como médicos e enfermeiros. Essa solução inovadora proporciona uma resposta eficiente a situações de emergência, promovendo a segurança e o rápido atendimento aos usuários necessitados. 

 

#Passos do Projeto: 

Configurar o Ambiente de Desenvolvimento: 

Instale a IDE do Arduino em seu computador. 

Adquira as bibliotecas necessárias para Wi-Fi e MQTT (por exemplo, PubSubClient). 

Configurar o Arduino: 

Selecione o modelo mais atual de Arduino na IDE. 

Configure as informações de conexão Wi-Fi e MQTT (SSID, senha, servidor MQTT, etc.). 

Conectar o Botão Físico: 

Conecte o botão físico a uma porta digital do Arduino. 

Conecte uma resistência pull-down entre a porta digital e o terra (GND). 

 

#Funcionamento 

Implementar o Código: 

Utilize a IDE do Arduino para escrever o código, incorporando a lógica do projeto. 

Integre a biblioteca PubSubClient para facilitar a comunicação MQTT. 

Botão Virtual no Celular: 

Configure um aplicativo MQTT no celular para simular o botão virtual. 

Conecte o aplicativo ao mesmo servidor MQTT utilizado pelo Arduino. 

Ao pressionar o botão virtual, o aplicativo deve publicar a mesma mensagem no tópico MQTT. 

Receber Notificação Luminosa: 

No lado do servidor, assine o tópico de notificação. 

Quando uma mensagem for recebida nesse tópico, ative o LED ou dispositivo luminoso correspondente. 

 

#Conclusões 

i. Os objetivos propostos foram alcançados? Parcialmente, infelizmente o nosso botão parou de funcionar e ficamos somente com a funcionalidade de acionamento da led pelo broker. 


ii. Quais são os principais problemas enfrentados e como foram resolvidos? Os principais problemas enfrentados foram conseguir encontrar a versão correta dos drivers para que a placa funcionasse e conseguir fazer a conexão correta do hardware. Resolvemos os problemas com muita pesquisa e trabalho duro. 


iii. Quais são as vantagens e desvantagens do projeto? A vantagem do nosso projeto é que ele possibilita o um deficiente a chamar ajuda com facilidade, a desvantagem é que se faltar energia o projeto fica inoperante até que a energia volte. 

 
iv. O que deveria/poderia ser feito para melhorar o projeto? Poderíamos ter adicionado uma bateria reserva para o projeto funcionar mesmo com uma queda de energia. 


#Medição do tempo de comunicação entre o broker e o atuador 

Foram feitos os testes e o tempo de resposta do atuador para um comando do broker foi quase instantâneo, infelizmente nosso sensor, o botão, parou de funcionar e não tivemos chance de fazer um teste mais preciso com ele, contudo, o que pudemos notar enquanto funcionava foi que o tempo de resposta era praticamente imediato. 
 

#Links 

Vídeo no youtube: (218) Projeto do acionador de SOS com ESP8266 NodeMCU + comunicação via MQTT - YouTube 


#Referências 

1 SOUZA, Fabio. S Controle dispositivos remotamente com ESP8266. Udemy, 2017. Disponível em: https://www.udemy.com/course/controle-dispositivos-remotamente-com-esp8266/ . Acesso em: 28 de outubro de 2023.  

2 GUIMARÃES, Flávio. Como Programar o ESP8266 na Placa NodeMcu - Video #2 - ESP8266 Primeiros Passos. Youtube, 2018. Disponível em: https://www.youtube.com/watch?v=URtIbITbGbU&t=13stamente-com-esp8266/. Acesso em: 27 de outubro de 2023.  

3 GUIMARÃES, Flávio. Sensor de Umidade e Temperatura DHT11 - Módulos para Arduino - Vídeo 20. Youtube, 2018. Disponível em: https://www.youtube.com/watch?v=-bVEFiogrBc . Acesso em: 27 de outubro de 2023. 

4 GUIMARÃES, Flávio. MQTT - Como Comunicar 2 Dispositivos via Internet - Vídeo #7, 2016. Disponível em: (218) MQTT - Como Comunicar 2 Dispositivos via Internet - Vídeo #7 - YouTube . Acesso em: 10 de agosto de 2023. 

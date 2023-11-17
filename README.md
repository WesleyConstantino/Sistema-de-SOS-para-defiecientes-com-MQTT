# Sistema-de-SOS-para-defiecientes-com-MQTT

#Desenvolvimento e Implementação de um Sistema de Comunicação Emergencial Integrado utilizando Protocolo MQTT para Ambientes Hospitalares e Espaços Públicos  

Humberto Rodrigues Neto¹, Wesley Constantino dos Santos², Marcelo Teixeira de Azevedo¹ 

1Universidade Presbiteriana Mackenzie (UPM) 


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

 

Arduino Node MCU – ESP 8266 – ESP-12E: 

Circuito eletrônico com fios

Descrição gerada automaticamente com confiança média 

Figura 1 - Arduino Node MCU – ESP 8266 – ESP-12E. Fonte: Humberto Rodrigues Neto, 2023. 

 

O Arduino  é uma placa micro controladora de código aberto que é muito usada na eletrônica e programação. NodeMCU é uma placa de desenvolvimento open-source baseada no módulo ESP8266, especificamente no ESP-12E. Aqui estão algumas informações técnicas detalhadas sobre a placa Arduino NodeMCU – ESP8266 – ESP-12E: 

Microcontrolador: 

O NodeMCU utiliza o microcontrolador ESP8266 ESP-12E. 

O ESP-12E integra um processador Tensilica L106 de 32 bits. 

Clock e Velocidade de Processamento: 

Frequência de operação: 80 MHz (pode ser ajustada para economia de energia). 

Memória: 

Flash: 4 MB. 

RAM: 64 KB. 

EEPROM: 512 Bytes. 

WiFi: 

Suporte para protocolos 802.11 b/g/n. 

Modos de operação: Station, SoftAP e Station+SoftAP. 

Conectividade: 

Interface USB para programação e alimentação. 

Suporte a UART, SPI, I2C e GPIOs. 

Alimentação: 

Tensão de operação recomendada: 3.3V. 

A placa geralmente é alimentada através da porta micro USB. 

Interface USB: 

Chip USB para comunicação serial. 

GPIO (General Purpose Input/Output): 

A placa possui vários pinos GPIO para entrada/saída digital. 

Alguns desses pinos podem ser configurados como GPIO, PWM, I2C, entre outros. 

Dimensões Físicas: 

As dimensões podem variar, mas a placa geralmente tem um formato retangular compacto. 

Programação: 

Pode ser programada usando a IDE do Arduino com suporte ao ESP8266. 

  xi.      Outras Características: 

Antena embutida no módulo ESP-12E. 

LED indicador de status. 

Botão de reset. 

Uma imagem contendo Diagrama

Descrição gerada automaticamente 

Figura 2 - Arduino Node MCU – ESP 8266 – ESP-12E. Fonte: www.fernandok.com, 2023. 

 

Tabela

Descrição gerada automaticamente 

Figura 3 – Constantes Predefinidas do Arduino Node MCU – ESP 8266 – ESP-12E. Fonte: www.fernadok.com, 2023. 

 

 

Protoboard:  

Tela de computador

Descrição gerada automaticamente com confiança baixa 

Figura 4 – Protoboard. Fonte: Humberto Rodrigues Neto, 2023. 

 

Tamanho e Layout: 

A placa pode ter 400 pontos de conexão, que geralmente são organizados em linhas e colunas. 

Cada ponto de conexão pode ser usado para inserir e conectar componentes eletrônicos, como resistores, capacitores, transistores, e fios. 

Material: 

A placa é feita de um material plástico transparente, permitindo a visualização dos componentes conectados na parte inferior da placa. 

Conexões: 

Os pontos de conexão são muitas vezes interconectados em linhas horizontais ou verticais. Normalmente, os pontos ao longo de uma linha estão eletricamente conectados. 

Os pontos são frequentemente dispostos em uma matriz, facilitando a conexão de componentes e fios. 

Tamanho Padrão: 

As placas de prototipagem seguem padrões de tamanhos, como o padrão de 400 pontos. Isso facilita a criação e transferência de projetos entre diferentes placas. 

Utilização: 

Essas placas são usadas para montar circuitos temporários, permitindo que os engenheiros e estudantes testem e modifiquem suas ideias rapidamente antes de criar um circuito mais permanente. 

Compatibilidade: 

Elas são frequentemente compatíveis com componentes eletrônicos comuns, como resistores e chips ICs (Integrated Circuits). 

A protoboard é projetada para permitir que os componentes eletrônicos sejam inseridos e conectados sem a necessidade de solda. Ela é composta por uma matriz de furos que estão conectados eletricamente em linhas e colunas. Esses furos são usados para inserir e interconectar componentes eletrônicos, como resistores, capacitores, diodos, transistores e outros, permitindo que sejam facilmente testados e reconfigurados. Ela será uma ferramenta muito útil para nosso projeto, já que permitem conectar diferentes componentes e topologias de circuitos sem a necessidade de solda ou conhecimento avançado de circuitos eletrônicos. 

 

Jumpers Macho – Macho: 

Uma imagem contendo pipa, voando, par, ar

Descrição gerada automaticamente 

Figura 4 – Jumpers Macho – Macho. Fonte: Humberto Rodrigues Neto, 2023. 

 

Conectores: 

Ambas as extremidades dos jumpers são equipadas com conectores do tipo macho. Esses conectores podem ser pinos retos ou curvos, dependendo do design específico do jumper. 

Comprimento: 

Os jumpers macho-macho estão disponíveis em diferentes comprimentos para atender às necessidades específicas do projeto. Comprimentos padrão incluem alguns centímetros até vários centímetros. 

Condutor Interno: 

O condutor interno do jumper é geralmente feito de cobre ou outro material condutor. A escolha do material pode afetar a resistência elétrica e a durabilidade do jumper. 

Isolamento: 

Os condutores são isolados uns dos outros para evitar curtos-circuitos e garantir a integridade do sinal. O isolamento pode ser feito de plástico ou outro material isolante. 

Cores: 

Os jumpers macho-macho muitas vezes vêm em diferentes cores. As cores podem ajudar na organização e identificação fácil dos cabos em um protótipo. 

Aplicações: 

Os jumpers macho-macho são usados em placas de prototipagem para criar conexões temporárias entre componentes eletrônicos, como resistores, LEDs, transistores, e outros. 

Compatibilidade: 

Os conectores macho são projetados para se encaixar em pinos ou soquetes fêmea, como os encontrados em placas de circuito impresso, chips ICs, e outros dispositivos eletrônicos. 

Flexibilidade: 

A flexibilidade dos jumpers facilita a manipulação e a conexão em ambientes de prototipagem. 

Reutilização: 

Esses jumpers são frequentemente reutilizáveis e podem ser desconectados e reconectados várias vezes sem perda significativa de qualidade de conexão. 

 
Os jumpers possuem a responsabilidade de desviar, ligar ou desligar o fluxo elétrico, cumprindo as configurações específicas do seu projeto. Ideal para montagem de projetos em protoboard com rapidez, agilidade e limpeza. Cabos multicoloridos com comprimento de 20 centímetros, secção do condutor de 24 AWG (0,2 mm²), com conectores do tipo Macho em ambas as extremidades. 

 

Cabo USB: 

Uma imagem contendo no interior, pequeno, par, mesa

Descrição gerada automaticamente 

Figura 5 – Cabo USB. Fonte: Humberto Rodrigues Neto, 2023. 

 

Conectores: 

Os cabos Micro USB geralmente têm um conector USB Tipo A em uma extremidade e um conector Micro USB na outra. O conector Micro USB é o que se conecta à entrada correspondente no Arduino. 

Padrões USB: 

Os cabos Micro USB seguem os padrões USB (Universal Serial Bus), que definem as especificações para a conexão física, comunicação e fornecimento de energia entre dispositivos eletrônicos. 

Pinagem: 

A pinagem do conector Micro USB inclui pinos para alimentação, terra e dados. No contexto do Arduino, os pinos de alimentação e terra são os mais relevantes para fornecer energia à placa. 

Alimentação: 

Os cabos Micro USB são frequentemente usados para fornecer energia ao Arduino a partir de uma fonte externa, como um computador, um carregador USB ou uma bateria. 

Transmissão de Dados: 

Além da alimentação, o cabo Micro USB pode ser usado para transferir dados entre o Arduino e um computador. Isso é útil para programar a placa ou para a comunicação de dados em projetos específicos. 

Comprimento do Cabo: 

Os cabos estão disponíveis em diferentes comprimentos para atender às necessidades específicas de cada aplicação. 

Material dos Condutores: 

Os condutores internos do cabo são geralmente feitos de cobre ou outro material condutor de eletricidade. A qualidade desses condutores afeta a eficiência na transmissão de dados e energia. 

Blindagem: 

Cabos de qualidade podem ter camadas de blindagem para proteger contra interferências eletromagnéticas (EMI) e garantir uma transmissão de dados mais estável. 

Durabilidade: 

A durabilidade do cabo é importante, especialmente se ele for usado em ambientes onde pode ser dobrado ou torcido com frequência. Cabos de boa qualidade geralmente têm revestimentos mais robustos e conectores reforçados. 

Compatibilidade: 

Os cabos Micro USB são compatíveis com uma variedade de dispositivos além do Arduino, incluindo smartphones, tablets e outros dispositivos eletrônicos. 

 

Botão/Sensor: 

Em preto e branco

Descrição gerada automaticamente com confiança média 

Figura 6 – Cabo USB. Fonte: Humberto Rodrigues Neto, 2023. 

 

Funcionamento Básico: 

Um botão é um interruptor simples que pode estar aberto ou fechado. Quando pressionado, ele fecha o circuito, permitindo que a corrente flua. 

Conexão ao Arduino: 

Os botões são conectados ao Arduino através de suas pernas (pinos). Um pino é geralmente conectado a um pino digital no Arduino, enquanto o outro pino está conectado ao GND (terra). 

Resistência Pull-Up ou Pull-Down: 

Normalmente, quando o botão não está sendo pressionado, há uma resistência pull-up ou pull-down associada. Isso ajuda a garantir um estado conhecido quando o botão não está pressionado. 

Leitura Digital: 

O Arduino lê o estado do botão como um valor digital. Se o botão estiver pressionado e o circuito estiver fechado, o valor lido é LOW (baixo); se não estiver pressionado e o circuito estiver aberto, o valor lido é HIGH (alto). 

Debounce: 

Problemas de bouncing podem ocorrer quando um botão é pressionado ou liberado, resultando em múltiplas leituras. Para resolver isso, muitas vezes é necessário implementar técnicas de debounce no código Arduino. 

Temporização: 

A temporização pode ser usada para garantir que um único pressionamento de botão seja registrado, mesmo que o botão esteja pressionado por um período mais longo. 

Tipo de Botão: 

Existem diferentes tipos de botões, incluindo botões momentâneos (que retornam à posição original quando não estão sendo pressionados) e botões de alternância (que mantêm sua posição até serem pressionados novamente). 

Aplicações: 

Os botões são amplamente utilizados em projetos Arduino para acionar ações específicas, como ligar/desligar um dispositivo, alterar modos de operação, ou selecionar opções em um menu. 

Resistência Interna: 

Alguns botões têm uma resistência interna, e a escolha entre um botão com ou sem resistência interna depende da configuração do circuito. 

Código Arduino: 

Para ler um botão no Arduino, o código geralmente envolve a utilização de funções como digitalRead() para ler o estado do pino ao qual o botão está conectado. 

 

 

 

 

Resistor 10k: 

Uma imagem contendo água, neve, colar, luz

Descrição gerada automaticamente 

Figura 6 – Cabo USB. Fonte: Humberto Rodrigues Neto, 2023. 

 

Um resistor de 10k (10,000 ohms) é uma resistência elétrica que é comumente usada em projetos com Arduino e eletrônica em geral.  

Valor da Resistência (R): 

O valor nominal do resistor é de 10,000 ohms, indicando que a resistência elétrica do componente é de 10 kiloohms (10kΩ). 

Tolerância: 

Os resistores têm uma tolerância que define a variação permitida no valor nominal. Resistores comuns têm tolerâncias de 1%, 5%, 10%, entre outras. Um resistor de 10k com uma tolerância de 1% significa que o valor real do resistor pode variar em até 1% para mais ou para menos. 

Potência Nominal (P): 

A potência nominal indica a quantidade máxima de energia que o resistor pode dissipar antes de se danificar. Resistores de 1/4 Watt são comuns em projetos com Arduino, mas para aplicações específicas, pode-se escolher resistores de potências mais altas, como 1/2 Watt ou 1 Watt. 

Código de Cores: 

Resistores de 10k geralmente possuem um código de cores impresso para identificação. Esse código é composto por faixas coloridas que representam os dígitos significativos, multiplicadores e tolerância. 

Aplicações Típicas: 

O resistor de 10k é frequentemente utilizado em circuitos de divisores de tensão, pull-up ou pull-down em entradas/saídas digitais, e em várias aplicações de sensores. Ele é uma escolha comum para limitar correntes e criar níveis de tensão apropriados em circuitos eletrônicos. 

Lei de Ohm: 

De acordo com a Lei de Ohm, a relação entre a tensão (V), corrente (I) e resistência (R) em um circuito é dada por V = I * R. Portanto, para um resistor de 10k, se uma tensão de 5V é aplicada, a corrente que flui através do resistor seria V/R = 5V / 10kΩ = 0.5 mA. 

Construção Física: 

Resistor de filme de carbono é o tipo mais comum encontrado em projetos de eletrônica. No entanto, resistores de filme metálico ou resistores de filme fino podem ser usados para aplicações específicas. 

 

Método 

 

Este projeto propõe uma aplicação que simula a interação entre um botão físico e um botão digital, conforme as diretrizes do protocolo MQTT. Destinado a ambientes hospitalares e espaços públicos, o sistema visa facilitar a solicitação de ajuda por meio de um botão físico acessível, complementado por uma opção remota via celular e conectividade Wi-Fi usando MQTT. Ao pressionar o botão, um sinal é enviado, acionando uma notificação luminosa para profissionais responsáveis, como médicos e enfermeiros. Essa solução inovadora proporciona uma resposta eficiente a situações de emergência, promovendo a segurança e o rápido atendimento aos usuários necessitados. 

 

Passos do Projeto: 

Configurar o Ambiente de Desenvolvimento: 

Instale a IDE do Arduino em seu computador. 

Adquira as bibliotecas necessárias para Wi-Fi e MQTT (por exemplo, PubSubClient). 

Configurar o Arduino: 

Selecione o modelo mais atual de Arduino na IDE. 

Configure as informações de conexão Wi-Fi e MQTT (SSID, senha, servidor MQTT, etc.). 

Conectar o Botão Físico: 

Conecte o botão físico a uma porta digital do Arduino. 

Conecte uma resistência pull-down entre a porta digital e o terra (GND). 

 

Circuito eletrônico com fios

Descrição gerada automaticamente com confiança média 

Figura 7 – Projeto Montado. Fonte: Humberto Rodrigues Neto, 2023. 

Tela de computador com texto preto sobre fundo branco

Descrição gerada automaticamente com confiança baixa 

Figura 8 – Modelo de montagem. Fonte: Humberto Rodrigues Neto, 2023. 

 

Funcionamento 

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

 

 

Figura 10 – Diagrama de casos de uso. Fonte: Lucidchart, 2023. 

 

 

Figura 11 – Fluxograma. Fonte: Lucidchart, 2023. 

 

 

Figura 12 – Layout do broker com o botão do led desligado. Fonte: Adafruit IO, 2023. 

 

 

Figura 13 – Layout do broker com o botão do led ligado. Fonte: Adafruit IO, 2023. 

 

Conclusões 

i. Os objetivos propostos foram alcançados? Parcialmente, infelizmente o nosso botão parou de funcionar e ficamos somente com a funcionalidade de acionamento da led pelo broker. 

 

ii. Quais são os principais problemas enfrentados e como foram resolvidos? Os principais problemas enfrentados foram conseguir encontrar a versão correta dos drivers para que a placa funcionasse e conseguir fazer a conexão correta do hardware. Resolvemos os problemas com muita pesquisa e trabalho duro. 

  

iii. Quais são as vantagens e desvantagens do projeto? A vantagem do nosso projeto é que ele possibilita o um deficiente a chamar ajuda com facilidade, a desvantagem é que se faltar energia o projeto fica inoperante até que a energia volte. 

  

iv. O que deveria/poderia ser feito para melhorar o projeto? Poderíamos ter adicionado uma bateria reserva para o projeto funcionar mesmo com uma queda de energia. 

 

Medição do tempo de comunicação entre o broker e o atuador 

Foram feitos os testes e o tempo de resposta do atuador para um comando do broker foi quase instantâneo, infelizmente nosso sensor, o botão, parou de funcionar e não tivemos chance de fazer um teste mais preciso com ele, contudo, o que pudemos notar enquanto funcionava foi que o tempo de resposta era praticamente imediato. Não colocamos os testes do sensor na tabela abaixo porque ele parou de funcionar antes de chegar até aqui, concordamos que seria mais apropriado colocar os testes somente do atuador, pois o fizemos com muita atenção. 

Núm. medida 

Sensor/atuador 

Tempo de resposta 

  Menos de um seg 

               Led 

  Menos de 1 seg 

  

  

  

  

  

  

 

 
Figura 14 – Interface do broker mostrando o envio das mensagens para a placa. Fonte: Adafruit IO, 2023. 

 

 

Figura 15 – Serial o Arduino IDE mostrando o recebimento das mensagens do broker. Fonte: Aduino IDE, 2023. 

 

 

Figura 14 – Gráfico de todos os testes realizados no broker. Fonte: Adafruit IO, 2023. 

 

 

Links 

Vídeo no youtube: (218) Projeto do acionador de SOS com ESP8266 NodeMCU + comunicação via MQTT - YouTube 

Github: WesleyConstantino/Sistema-de-SOS-para-defiecientes-com-MQTT (github.com) 

 

 

Referências 

1 SOUZA, Fabio. S Controle dispositivos remotamente com ESP8266. Udemy, 2017. Disponível em: https://www.udemy.com/course/controle-dispositivos-remotamente-com-esp8266/ . Acesso em: 28 de outubro de 2023.  

2 GUIMARÃES, Flávio. Como Programar o ESP8266 na Placa NodeMcu - Video #2 - ESP8266 Primeiros Passos. Youtube, 2018. Disponível em: https://www.youtube.com/watch?v=URtIbITbGbU&t=13stamente-com-esp8266/. Acesso em: 27 de outubro de 2023.  

3 GUIMARÃES, Flávio. Sensor de Umidade e Temperatura DHT11 - Módulos para Arduino - Vídeo 20. Youtube, 2018. Disponível em: https://www.youtube.com/watch?v=-bVEFiogrBc . Acesso em: 27 de outubro de 2023. 

4 GUIMARÃES, Flávio. MQTT - Como Comunicar 2 Dispositivos via Internet - Vídeo #7, 2016. Disponível em: (218) MQTT - Como Comunicar 2 Dispositivos via Internet - Vídeo #7 - YouTube . Acesso em: 10 de agosto de 2023. 

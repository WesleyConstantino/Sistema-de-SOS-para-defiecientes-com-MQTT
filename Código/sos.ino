/************************ Adafruit IO Config *******************************/
#define IO_USERNAME  "humbertoneto"
#define IO_KEY       "aio_mHlJ08s4JRxxXAaWxCDMzFlwU7CD"

/******************************* WIFI **************************************/
#define WIFI_SSID "NDP"
#define WIFI_PASS "18051960"

// comment out the following lines if you are using fona or ethernet
#include "AdafruitIO_WiFi.h"

#if defined(USE_AIRLIFT) || defined(ADAFRUIT_METRO_M4_AIRLIFT_LITE) ||         \
    defined(ADAFRUIT_PYPORTAL)
// Configure the pins used for the ESP32 connection
#if !defined(SPIWIFI_SS) // if the wifi definition isnt in the board variant
// Don't change the names of these #define's! they match the variant ones
#define SPIWIFI SPI
#define SPIWIFI_SS 10 // Chip select pin
#define NINA_ACK 9    // a.k.a BUSY or READY pin
#define NINA_RESETN 6 // Reset pin
#define NINA_GPIO0 -1 // Not connected
#endif
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS, SPIWIFI_SS,
                   NINA_ACK, NINA_RESETN, NINA_GPIO0, &SPIWIFI);
#else
AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
#endif

/************************ Mapeamento de IO *******************************/
const byte L1 = 2; //pino que o LED do módulo ESP12E está ligado

/************************ Configuração dos tópicos *******************************/

// configura o tópico "fabiosouza_io/feeds/L1"
AdafruitIO_Feed *feedL1 = io.feed("L1");

/************************ Função setup *******************************/
void setup() {

  //configura pino da Lampada como saída
  pinMode(L1,OUTPUT); 

  // configura comunicação serial
  Serial.begin(115200);

  // Aguarda serial monitor
  while(! Serial);

  conectaBroker(); //função para conectar ao broker


}

/************************ Função loop *******************************/
void loop() {

  // processa as mensagens e mantêm a conexão ativa
  byte state = io.run();

  //verifica se está conectado
  if(state == AIO_NET_DISCONNECTED | state == AIO_DISCONNECTED){
    conectaBroker(); //função para conectar ao broker
  }
  
}

/****** Função de tratamento dos dados recebidos em L1***************/
void handleL1(AdafruitIO_Data *data) {

  // Mensagem 
  Serial.print("Recebido  <- ");
  Serial.print(data->feedName());
  Serial.print(" : ");
  Serial.println(data->value());

  //Aciona saída conforme dado recebido
  if(data->isTrue())
    digitalWrite(L1, LOW);
  else
    digitalWrite(L1, HIGH);
}


/****** Função para conectar ao WIFI e Broker***************/
void conectaBroker(){
  
  //mensagem inicial
  Serial.print("Conectando ao Adafruit IO");

  // chama função de conexão io.adafruit.com
  io.connect();

   // instancia um novo handler para recepção da mensagem do feed L1 
  feedL1->onMessage(handleL1);

  // Aguarda conexação ser estabelecida
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  // Conectado
  Serial.println();
  Serial.println(io.statusText());

  // certifique-se de que todos os feeds obtenham seus valores atuais imediatamente
  feedL1->get();
}

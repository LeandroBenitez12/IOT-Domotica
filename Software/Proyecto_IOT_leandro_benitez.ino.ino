
#define BLYNK_TEMPLATE_ID "TMPLT_3l-s7f"
#define BLYNK_DEVICE_NAME "Casa"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7

#include "BlynkEdgent.h"

const byte DORMITORIO1 = 27;
const byte DORMITORIO2 = 26;
const byte DORMITORIO3 = 25;
const byte DORMITORIO4 = 33;
const byte DORMITORIO5 = 21;
const byte DORMITORIO6 = 19;
const byte DORMITORIO7 = 2;
const byte DORMITORIO8 = 18;


void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO1, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO2, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO3, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO4, OUTPUT);

  BlynkEdgent.begin();

   Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO5, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO6, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO7, OUTPUT);

  BlynkEdgent.begin();

  Serial.begin(115200);
  delay(100);
  pinMode(DORMITORIO8, OUTPUT);

  BlynkEdgent.begin();
}
void loop() {
  BlynkEdgent.run();
}


BLYNK_WRITE(V0){
  int state = param.asInt();
  digitalWrite(DORMITORIO1, state);
}

BLYNK_WRITE(V1){
  int state = param.asInt();
  digitalWrite(DORMITORIO2, state);
}

BLYNK_WRITE(V2){
  int state = param.asInt();
  digitalWrite(DORMITORIO3, state);
}

BLYNK_WRITE(V3){
  int state = param.asInt();
  digitalWrite(DORMITORIO4, state);
}
  
BLYNK_WRITE(V4){
  int state = param.asInt();
  digitalWrite(DORMITORIO5, state);
}

BLYNK_WRITE(V5){
  int state = param.asInt();
  digitalWrite(DORMITORIO6, state);
}

BLYNK_WRITE(V6){
  int state = param.asInt();
  digitalWrite(DORMITORIO7, state);
}

BLYNK_WRITE(V7){
  int state = param.asInt();
  digitalWrite(DORMITORIO8, state);
}

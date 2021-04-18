

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t kIrLed = D5;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).

const int LED1 = D5;

const int b1 = 10; //SD3
const int b2 = 9; //SD2
const int b3 = 16; //D0
const int b4 = 5; //D1
const int b5 = 4; //D2
const int b6 = 0; //D3
const int b7 = 2; //D4
const int b8 = 14; //D5
const int b9 = 12; //D6
const int b10 = 13; //D7

IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.


void setup() {
  


 pinMode(LED1,OUTPUT);
 pinMode(b1,INPUT);
 pinMode(b2,INPUT);
 pinMode(b3,INPUT);
 pinMode(b4,INPUT);
 pinMode(b5,INPUT);
 pinMode(b6,INPUT);
 pinMode(b7,INPUT);
 pinMode(b8,INPUT);
 pinMode(b9,INPUT);
 pinMode(b10,INPUT);
   
}

void loop() {

     if (digitalRead(b1) == HIGH) {
      irsend.sendNEC(0x807FC837, 32);  //ok   
    }

    if (digitalRead(b2) == HIGH) {
      irsend.sendNEC(0x807F6897, 32);  //channel  +
    }

    if (digitalRead(b3) == HIGH) {
      irsend.sendNEC(0x807F8A75, 32);  // channel left 
    }

    if (digitalRead(b4) == HIGH) {
      irsend.sendNEC(0x807F0AF5, 32); // channel right
    }

    if (digitalRead(b5) == HIGH) {
      irsend.sendNEC(0x807F58A7, 32);  // channel -
    }
    
    if (digitalRead(b6) == HIGH) {
      irsend.sendNEC(0x807F18E7, 32);   // volume +
    }
    
    if (digitalRead(b7) == HIGH) {
      irsend.sendNEC(0x807F08F7, 32); // volume -
    }
    
    if (digitalRead(b8) == HIGH) {
      irsend.sendNEC(0x807F9867, 32);  // exit
    }
     if (digitalRead(b9) == HIGH) {
      irsend.sendNEC(0x807F08F7, 32); //  MUTE
    }
    
    if (digitalRead(b10) == HIGH) {
      irsend.sendNEC(0x807F9867, 32);  // POWER
    }
}

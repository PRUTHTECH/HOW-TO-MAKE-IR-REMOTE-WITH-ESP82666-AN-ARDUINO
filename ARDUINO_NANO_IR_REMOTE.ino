
//PRUTHTECH
// IR Remote 


#include <IRremote.h>  



IRsend irsend;

const int IRsend = D12;
const int b1  = D2; //POWER
const int b2  = D3; //VOLUME +
const int b3  = D4; // UP 
const int b4  = D5; // VOLUME-
const int b5  = D6; // LEFT 
const int b6  = D7; // OK
const int b7  = D8;// RIGHT
const int b8  = D9; // BACK 
const int b9  = D10; // DOWN
const int b10 = D11; // EXTRA




void setup() {
  pinMode(IRsend,OUTPUT);
  pinMode(b1, INPUT); //POWER
  pinMode(b2, INPUT); //VOLUME  +
  pinMode(b3, INPUT); // UP  
  pinMode(b4, INPUT); // VOLUME - 
  pinMode(b5, INPUT); // LEFT 
  pinMode(b6, INPUT); // OK 
  pinMode(b7, INPUT); //  RIGHT
  pinMode(b8, INPUT); // BACK
  pinMode(b9, INPUT); // DOWN 
  pinMode(b10, INPUT); // EXTRA
}

void loop() {
  
    if (digitalRead(b1) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  //POWER   
    }

    if (digitalRead(b2) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  //VOLUME  +
    }

    if (digitalRead(b3) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  // UP 
    }

    if (digitalRead(b4) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32); //VOLUME -
    }

    if (digitalRead(b5) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  //LEFT
    }
    
    if (digitalRead(b6) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);   // OK
    }
    
    if (digitalRead(b7) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32); // RIGHT 
    }
    
    if (digitalRead(b8) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  // BACK
    }
     if (digitalRead(b9) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32); //  DOWN
    }
    
    if (digitalRead(b10) == HIGH) {
      delay(50);
      irsend.sendNEC(0x0000, 32);  // EXTRA
    }
}

#include <Arduino.h>

//const int pinA = 2;  // Broche utilisée pour le Keystone Jack A
//const int pinB = 3;  // Broche utilisée pour le Keystone Jack BÀ
//int pinA[8] = {10, 9, 8, 7, 6, 5, 4, 3}; // Broches du Keystone Jack A
//int pinB[8] = {2, 11, 12, 13, A0, A1, A2, A3}; // Broches du Keystone Jack B

void setup() {
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int s0 = digitalRead(10);
  int s1 = digitalRead(9);
  int s2 = digitalRead(8);
  int s3 = digitalRead(7);
  int s4 = digitalRead(6);
  int s5 = digitalRead(5);
  int s6 = digitalRead(4);
  int s7 = digitalRead(3);
  
  int sOut0 = digitalRead(2);
  int sOut1 = digitalRead(11);
  int sOut2 = digitalRead(12);
  int sOut3 = digitalRead(13);
  int sOut4 = digitalRead(A0);
  int sOut5 = digitalRead(A1);
  int sOut6 = digitalRead(A2);
  int sOut7 = digitalRead(A3);

  Serial.print(s0);
 
   Serial.print(s1);
    Serial.print(s2);
     Serial.print(s3);
      Serial.print(s4);
       Serial.print(s5);
        Serial.print(s6);
         Serial.print(s7);
         Serial.println();
  Serial.print(sOut0);
  
    Serial.print(sOut1);
     Serial.print(sOut2);
      Serial.print(sOut3);
      Serial.print(sOut4);
        Serial.print(sOut5);
         Serial.print(sOut6);
          Serial.print(sOut7);
             Serial.println();
  delay(5000);
}
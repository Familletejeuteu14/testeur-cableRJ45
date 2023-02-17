/*
  Titre      : Testeur RJ45
  Auteur     : maxim tessa
  Date       : 17/02/2023
  Description: Un microcontroleur qui teste si un cable RJ45 est croisé ou droit 
  Version    : 0.0.1
*/

#include <Arduino.h>
#include "..\include\cable.h"

void cable::broche (){
pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(15, INPUT);
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  pinMode(18, INPUT);
}
void cable::InputMode(){
   s0 = digitalRead(10);//blanc-orange
   s1 = digitalRead(9);//orange
   s2 = digitalRead(8);//blanc-vert
   s3 = digitalRead(7);//bleu
   s4 = digitalRead(6);//blanc-bleu
   s5 = digitalRead(5);//vert
   s6 = digitalRead(4);//blanc-brun
   s7 = digitalRead(3);//brun
}
 void cable::OutputMode(){
   sOut0 = digitalRead(2);//blanc-orange
   sOut1 = digitalRead(11);//orange
  sOut2 = digitalRead(12);//blanc-vert
  sOut3 = digitalRead(13);//bleu
  sOut4 = digitalRead(15);//blanc-bleu
  sOut5 = digitalRead(16);//vert
  sOut6 = digitalRead(17);//blanc-brun
  sOut7 = digitalRead(18);//brun
 }
int cable::affichage(){
    if(s0 == sOut0 && s1 == sOut1 && s2 == sOut2 && s3 == sOut3 && s4 == sOut4 && s5 == sOut5 && s6 == sOut6 && s7 == sOut7)
{
    Serial.println("cable droit");
        delay(5000);
}else if( s0 == sOut2 && s1 == sOut5 && s2 == sOut0 && s3 == sOut3 && s4 == sOut4 && s5 == sOut1 && s6 == sOut6 && s7 == sOut7)
{
  Serial.println("cable croisé");
        delay(5000);
}else{
  Serial.println("cable non fonctionel");
}
}

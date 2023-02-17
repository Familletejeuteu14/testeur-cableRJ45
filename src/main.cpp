#include <Arduino.h>
#include "..\include\cable.h"


  
void setup() {
  cable cote;
 cote.broche();
  Serial.begin(9600);
}

void loop() {
  cable cote;
  cote.InputMode();
  cote.OutputMode();
 cote.affichage();

}
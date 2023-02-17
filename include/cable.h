#ifndef CABLE_H
   #define CABLE_H

#include<Arduino.h>
#include<string.h>

class cable{
     private :
  int s0 = 10;//blanc-orange
  int s1 = 9;//orange
  int s2 = 8;//blanc-vert
  int s3 = 7;//bleu
  int s4 = 6;//blanc-bleu
  int s5 = 5;//vert
  int s6 = 4;//blanc-brun
  int s7 = 3;//brun
//recu
  int sOut0 = 2;//blanc-orange
  int sOut1 = 11;//orange
  int sOut2 = 12;//blanc-vert
  int sOut3 = 13;//bleu
  int sOut4 = 15;//blanc-bleu
  int sOut5 = 16;//vert
  int sOut6 = 17;//blanc-brun
  int sOut7 = 18;//brun

     public :
     // envoi

  

     // Declaration constrecteur par default 
    
 // Fonction setup input 
    void InputMode();
     // Fonction setup Output 
    void OutputMode();

    void broche();

    int affichage();
};
#endif
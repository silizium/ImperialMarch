#include "notes.h"
#define PIN_TONE 9
#define PIN_TONE2 4

void setup() {     
  pinMode(PIN_TONE, OUTPUT);   
  //digitalWrite(9,LOW);
  //Serial.begin(115200);
}

int score[]={
  HZ_A3,L_Q,
  HZ_A3,L_Q,
  HZ_A3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_C4,L_S,

  HZ_A3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_C4,L_S,
  HZ_A3,L_H,

  HZ_E4,L_Q,
  HZ_E4,L_Q,
  HZ_E4,L_Q,
  HZ_F4,L_E+L_S,
  HZ_C4,L_S,

  HZ_Ab3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_C4,L_S,
  HZ_A3,L_H,

  HZ_A4,L_Q,
  HZ_A3,L_E+L_S,
  HZ_A3,L_S,
  HZ_A4,L_Q,
  HZ_Ab4,L_E+L_S,
  HZ_G4,L_S,

  HZ_Gb4,L_S,
  HZ_E4,L_S,
  HZ_F4,L_E,
  PAUSE, L_E, //pause
  HZ_Bb3,L_E,
  HZ_Eb4,L_Q,
  HZ_D4,L_E+L_S,
  HZ_Db4,L_S,

  HZ_C4,L_S,
  HZ_B3,L_S,
  HZ_C4,L_E,
  PAUSE, L_E, //PAUSE QUASI FINE RIGA
  HZ_F3,L_E,
  HZ_Ab3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_A3,L_S,

  HZ_C4,L_Q,
  HZ_A3,L_E+L_S,
  HZ_C4,L_S,
  HZ_E4,L_H,

  HZ_A4,L_Q,
  HZ_A3,L_E+L_S,
  HZ_A3,L_S,
  HZ_A4,L_Q,
  HZ_Ab4,L_E+L_S,
  HZ_G4,L_S,

  HZ_Gb4,L_S,
  HZ_E4,L_S,
  HZ_F4,L_E,
  PAUSE, L_E, //PAUSE
  HZ_Bb3,L_E,
  HZ_Eb4,L_Q,
  HZ_D4,L_E+L_S,
  HZ_Db4,L_S,

  HZ_C4,L_S,
  HZ_B3,L_S,
  HZ_C4,L_E,
  PAUSE,L_E, //PAUSE QUASI FINE RIGA
  HZ_F3,L_E,
  HZ_Ab3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_C4,L_S,

  HZ_A3,L_Q,
  HZ_F3,L_E+L_S,
  HZ_C4,L_S,
  HZ_A3,L_H,

  PAUSE,2*L_H,

  0
};

void play(int *score){
  for(;*score;score++){
    if(*score>0){
      tone(PIN_TONE, *score, *(score+1)*0.75);
      delay(*++score);
    }else{
      delay(*++score);
    }
  }
}

// the loop routine runs over and over again forever:
void loop() {
  play(score);
}

#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int Eingang1 = 0;
int Eingang2 = 1;
int Eingang_Spannung = 6;
int Eingang_interrrupt = 9;
int Ausgang_Triac = 3;
int Led1 = 14;
int Led2 = 15;

int einschalten = 0;

void setup() {
// Initialisiert Pin 14 (LED1) als output
pinMode(Led1, OUTPUT);
pinMode(Led2, OUTPUT);

pinMode(Eingang1, INPUT);   //Taster zum Einschalten
pinMode(Eingang2, INPUT);   //Taster zum Ausschalten
pinMode(Eingang_Spannung, INPUT); 
pinMode(Ausgang_Triac, OUTPUT);  
}

void loop (){ 
einschalten = digitalRead(Eingang1);
for (einschalten = 1){
  digitalWrite(Ausgang_Triac,HIGH);
  digitalWrite(Led1,HIGH);
  int Nulldurchgang = 0;
  for 
}


}



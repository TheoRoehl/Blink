#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int Eingang1 = 0;
int Eingang2 = 1;
int Eingang_Spannung = 6;
int Ausgang_Triac = 3;
int einschalten = 0;
int ausschalten = 0;


void setup() {
// Initialisiert Pin 14 (LED1) als output
pinMode(14, OUTPUT);

pinMode(Eingang1, INPUT);   //Taster zum Einschalten
pinMode(Eingang2, INPUT);   //Taster zum Ausschalten
pinMode(Eingang_Spannung, INPUT); //noch nicht belegt
pinMode(Ausgang_Triac, OUTPUT);   //noch nicht belegt
}

void loop (){ 
  int einschalten = digitalRead(Eingang1);
if(einschalten= 1){
  digitalWrite(14,HIGH); //Wenn Einschalter gedrückt wird angeschaltet, egal wie Vorzustand
  delay(1000);           //Bisschen Zeit rumkriegen
}
int ausschalten = digitalRead(Eingang2);
if(ausschalten = 1){
  digitalWrite(14,LOW); // wenn ausschalter gedrückt wird ausgeschaltet, egal wie Vorzustand
  delay(1000);          // Bisschen Zeit rumriegen
}                       // Ohne Tastendruck bleibt die Lampe dauerhaft an/aus, je nach letztem Tastendruck
}


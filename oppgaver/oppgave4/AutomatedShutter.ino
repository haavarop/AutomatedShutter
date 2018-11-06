#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Bruk D6 og D7 portene på brettet dit
const int openShutterPin = D7;
const int closeShutterPin = D6;  

char auth[] = "YOUR AUTH TOKEN";

// Your WiFi credentials.
char ssid[] = "Hackerspace Kurs"; // Your mobile phone must be on the same network
char pass[] = ""; //No password is required

//Denne koden kjøres når du trykker på knappen i telefonen din
BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  // Bruk det du lærte i oppgave 2 og 3 til å løse denne! 
  
  /* Din kode her ! */
  
}


void setup() {
  pinMode(openShutterPin, OUTPUT);
  pinMode(closeShutterPin, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}

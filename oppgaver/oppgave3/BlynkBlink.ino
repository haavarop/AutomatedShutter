#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Use this pin
const int ledPin = D7;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YOUR AUTH TOKEN"; //Husk å put auth-token din her

// Your WiFi credentials.
char ssid[] = "Hackerspace Kurs"; // Mobilappen din må være på dette nettet!
char pass[] = ""; 

// Her får vi kode fra Blynk
// Den blir kalt hver gang vi trykker på knappen i appen 
BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); //Her lagrer vi verdien som kommer fra BLYNK
  // pinValue kan ha to verdier 0 eller 1
  if(pinValue == 1) {
    // Putt kode her for å skru på lyset
  }
  
  // Du trenger også kode for å skru av l
  
}

void setup() {
  // Debug console
  Serial.begin(9600);

  // Starts Blynk
  Blynk.begin(auth, ssid, pass);

  pinMode(ledPin, OUTPUT);
}

void loop() {
  Blynk.run();
}

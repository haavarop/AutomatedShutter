#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const int ledPin = D7;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YOUR AUTH TOKEN";

// Your WiFi credentials.
char ssid[] = "Hackerspace Kurs"; // Husk å koble mobilen på samme nettverk
char pass[] = ""; // Ingen passord på nettet

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1
BLYNK_WRITE(V1) {
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  Serial.print("V1 Slider value is: "); // Check Seriel monitor if data is received from Blynk app
  Serial.println(pinValue);

  if(pinValue == 1) {
      digitalWrite(ledPin, HIGH);
  }
  else {
      digitalWrite(ledPin, LOW);
  }
}

void setup() {

  // Starts Blynk
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}


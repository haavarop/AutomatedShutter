#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

const int openShutterPin = D7;
const int closeShutterPin = D6;  

char auth[] = "YOUR AUTH TOKEN";

char ssid[] = "Hackerspace Kurs";
char pass[] = "";

int beenPressed = 0;


BLYNK_WRITE(V1) {

  int pinValue = param.asInt(); 

  if ( pinValue == 1 && beenPressed == 0 ) {
    digitalWrite(openShutterPin, HIGH);
    digitalWrite(closeShutterPin, LOW);
    
    delay(400); // This value may vary from shutter to shutter
    
    digitalWrite(openShutterPin, LOW);
    beenPressed = 1; 
  }
  if ( pinValue == 0 && beenPressed != 0  ) {
      digitalWrite(openShutterPin, LOW);
      digitalWrite(closeShutterPin, HIGH);
      
      delay(400); // This value may vary from shutter to shutter
      
      digitalWrite(closeShutterPin, LOW);
      beenPressed = 0; 
  }
}

void setup() {

  pinMode(openShutterPin, OUTPUT);
  pinMode(closeShutterPin, OUTPUT);
  
  Blynk.begin(auth, ssid, pass);

}

void loop() {
  Blynk.run();
}

/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************

  You can use this sketch as a debug tool that prints all incoming values
  sent by a widget connected to a Virtual Pin 1 in the Blynk App.

  App project setup:
    Slider widget (0...100) on V1
 *************************************************************/

/* Comment this out to disable prints and save space */
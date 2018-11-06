// Koble disse to i IN1 og IN2 på motorkontrollbrettet
const int clockWisePin = D7;
const int counterClockWisePin = D6;

void setup() {
    pinMode(clockWisePin, OUTPUT);
    pinMode(counterClockWisePin, OUTPUT);
}

void loop() {
  // Her kan du bruke funksjonene som er laget under
  // Klarer du å få motoren til å spinne med klokken i 1000ms, så 1000ms mot klokken? 
  // Funksjonkall ser slik ut: spinClockWise();

}


// Denne metoden får motoren til å spinne med klokken 
void spinClockWise() {
  digitalWrite(counterClockWisePin, LOW);
  delay(200);
  digitalWrite(clockWisePin, HIGH);
}

// Denne metoden får motoren til å spinne mot klokken 
void spinCounterClockWise() {
  digitalWrite(clockWisePin, LOW);
  delay(200);
  digitalWrite(counterClockWisePin, HIGH);
}


const int clockWisePin = D7;  
const int counterClockWisePin = D6;

void setup() {
  pinMode(clockWisePin, OUTPUT);
  pinMode(counterClockWisePin, OUTPUT);
}

void loop() {
  spinClockWise();
  delay(1000);
  spinCounterClockWise();
  delay(1000);
}

void spinClockWise() {
  digitalWrite(counterClockWisePin, LOW);
  delay(200);
  digitalWrite(clockWisePin, HIGH);
}

void spinCounterClockWise() {
  digitalWrite(clockWisePin, LOW);
  delay(200);
  digitalWrite(counterClockWisePin, HIGH);
}

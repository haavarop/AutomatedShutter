
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
  digitalWrite(closeShutterPin, LOW);
  delay(200);
  digitalWrite(openShutterPin, HIGH);
}

void spinCounterClockWise() {
  digitalWrite(openShutterPin, LOW);
  delay(200);
  digitalWrite(closeShutterPin, HIGH);
}

// Bruk denne verdien i koden din
// Når du skal koble opp kretsen bruk D7 på brettet
const int ledPin = D7; 

void setup() {
  // Her forteller vi Arduinoen hva ledPin skal brukes til
  pinMode(ledPin, OUTPUT);


}

// Denne koden utføres gjentatte ganger
void loop() {

  // For å skru på lyset gjør vi slik:
  digitalWrite(ledPin, HIGH);
  delay(500);
  
  // Hvordan går du frem for å skru lyset av igjen? 

}

int pirPin = 2;  // Pino do sensor PIR
int ledPin = 13;  // Pino do LED

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  // Desliga o LED inicialmente
  Serial.begin(9600);
}

void loop() {
  int pirStatus = digitalRead(pirPin);  // Lê o status do sensor PIR

  if (pirStatus == HIGH) {
    digitalWrite(ledPin, HIGH);  // Liga o LED se movimento é detectado
    Serial.println("Movimento detectado!");
    delay(1000);  // Mantém o LED aceso por 1 segundo
  } else {
    digitalWrite(ledPin, LOW);  // Desliga o LED se nenhum movimento for detectado
  }
}

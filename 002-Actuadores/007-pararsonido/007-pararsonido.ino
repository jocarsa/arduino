int pin = 8;

void setup() {
  pinMode(pin,OUTPUT);
  tone(pin,440);
  delay(1000);
  noTone(pin);
}

void loop() {
  

}

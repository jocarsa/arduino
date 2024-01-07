int pin = 8;
int retraso = 50;

void setup() {
  pinMode(pin,OUTPUT);
 
}

void loop() {
   tone(pin,440);
  delay(retraso);
  noTone(pin);
   delay(retraso);

}

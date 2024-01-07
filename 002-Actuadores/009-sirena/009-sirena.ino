#include <math.h>

int pin = 8;
int retraso = 50;
int contador = 0;
int tonomedio = 440;
int amplitud = 100;

void setup() {
  pinMode(pin,OUTPUT);
 
}

void loop() {
  contador++;
   tone(pin,tonomedio+cos(contador)*amplitud);
  delay(retraso);
  noTone(pin);
   delay(retraso);

}

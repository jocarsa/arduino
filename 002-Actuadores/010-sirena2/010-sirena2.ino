#include <math.h>

int pin = 8;
int retraso = 5;
float contador = 0;
int tonomedio = 880;
int amplitud = 100;

void setup() {
  pinMode(pin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  Serial.print("contador:");
  Serial.print(contador);
  Serial.print("coseno:");
  Serial.print(cos(contador));
  Serial.print("\n");
  contador += 0.2;
   tone(pin,tonomedio+cos(contador)*amplitud);
  delay(retraso);


}

#include <Servo.h>
Servo miservo;

int contador = 0;
int direccion = 0;

void setup() {
   miservo.attach(8);
   
}

void loop() {
  if(direccion == 0){
    contador++;
  }else{
    contador--;
  }
  if(contador == 180){
    direccion = 1;
  }
  if(contador == 0){
    direccion = 0;
  }
  miservo.write(contador);
  delay(5);

}

#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  myservo.writeMicroseconds(rangoGrados(0));
  delay(1500);
  myservo.writeMicroseconds(rangoGrados(90));
  delay(1500);
}

int rangoGrados(int x) {
  int resultado;
  resultado = map(x,0,90,1000,2000);
  return resultado;
}

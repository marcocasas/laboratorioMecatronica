#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
    myservo.writeMicroseconds(rangoGrados(0));
    delay(50);
  for(int i=1;i<90;i++) {
    myservo.writeMicroseconds(rangoGrados(i));
    delay(50);
  }
  delay(50);
}

int rangoGrados(int x) {
  int resultado;
  resultado = map(x,0,90,1000,2000);
  return resultado;
}

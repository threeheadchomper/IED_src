#include <Servo.h>
#define PIN_SERVO 10
Servo myservo;

int degreeCo = 0;  // 변수로 선언

void setup() {
  myservo.attach(PIN_SERVO); 
  myservo.write(90);
  delay(1000);
}

void loop() {
  int degree = (90 * (degreeCo % 3));
  
  myservo.write(degree);
  degreeCo += 1;
  delay(1000);
}

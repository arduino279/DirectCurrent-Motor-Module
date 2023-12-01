#include <Servo.h>

Servo servo;

void attachServo(int pin) {
  servo.attach(pin);
}

void moveServo(int angle) {
  servo.write(angle);
}

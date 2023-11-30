#include <Servo.h>

Servo servo;

void attachServo(servo, int pin) {
  servo.attach(pin);
}

void moveServo(servo, int angle) {
  servo.write(angle);
}

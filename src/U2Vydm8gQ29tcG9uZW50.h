#include <Servo.h>

struct setup {
    int servo;
};

Servo servo;

void attachServo(int pin) {
}

void moveServo(int angle) {
  servo.attach(setup.servo);
  servo.write(angle);
}

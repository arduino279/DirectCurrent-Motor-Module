#include <Servo.h>

struct setup {
    int servo;
};

Servo servo;

void moveServo(int angle) {
  servo.attach(setup.servo);
  servo.write(angle);
}

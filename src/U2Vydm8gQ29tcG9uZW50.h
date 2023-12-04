#include <Servo.h>

struct setup2 {
    int servo;
};

Servo servo;

void moveServo(int angle) {
  servo.attach(setup.servo);
  servo.write(angle);
}

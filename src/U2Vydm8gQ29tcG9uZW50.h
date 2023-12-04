#include <Servo.h>
#include <stdio.h>
#include <string.h>

class setup2 {
  public:
    int servo;
};

Servo servo;

void moveServo(int i, int angle) {
  servo.attach(setup2.servo);
  servo.write(angle);
}

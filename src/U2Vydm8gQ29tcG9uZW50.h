#include <Servo.h>
#include <stdio.h>
#include <string.h>

class setup2 {
    public:
      int servo;
};

Servo servo;
setup2 servo;

void moveServo(int i, int angle) {
  servo.attach(pin[i].servo);
  servo.write(angle);
}

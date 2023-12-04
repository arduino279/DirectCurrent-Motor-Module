#include <Servo.h>
#include <stdio.h>
#include <string.h>

typedef struct setup2 {
  int servo;
} ServoConfig;

Servo servo;

void moveServo(int i, int angle) {
  servo.attach(setup2.servo);
  servo.write(angle);
}

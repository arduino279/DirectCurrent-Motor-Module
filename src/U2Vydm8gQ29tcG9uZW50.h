#include <Servo.h>
#include <stdio.h>
#include <string.h>

Servo servo;

typedef struct setup2 {
  int servo;
} ServoConfig;

setup2 pin1;

void moveServo(int angle) {
  servo.attach(pin1.servo);
  servo.write(angle);
}

#include <Servo.h>
#include <stdio.h>
#include <string.h>

typedef struct setup2 {
  int servo;
} ServoConfig;

Servo servo;
ServoConfig pin1;

void moveServo(int angle) {
  servo.attach(pin1.servo);
  servo.write(angle);
}

#include <Servo.h>
#include <stdio.h>
#include <string.h>

typedef struct setup2 {
  int servo;
  int angle;
} ServoConfig;

Servo servo;
ServoConfig pin1;

void moveServo(int angle) {
  pin1.angle = angle;
  servo.attach(pin1.servo);
  servo.write(angle);
}

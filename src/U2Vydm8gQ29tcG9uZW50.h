#include <Servo.h>

typedef struct setup2 {
  int servo;
  int angle;
} ServoConfig;

Servo servo;
ServoConfig pin1;
ServoConfig pin2;
ServoConfig pin3;
ServoConfig pin4;
ServoConfig pin5;
ServoConfig pin6;
ServoConfig pin7;
ServoConfig pin8;
ServoConfig pin9;
ServoConfig pin10;

void moveServo(int i, int angle) {
  pin[i].angle = angle;
  servo.attach(pin[i].servo);
  servo.write(angle);
}

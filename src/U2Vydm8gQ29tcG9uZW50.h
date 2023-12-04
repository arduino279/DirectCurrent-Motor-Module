#include <Servo.h>
#include <stdio.h>
#include <string.h>

typedef struct setup2 {
    int servo;
} ServoConfig;

Servo servo;

void moveServo(int angle) {
  servo.attach(setup.servo);
  servo.write(angle);
}

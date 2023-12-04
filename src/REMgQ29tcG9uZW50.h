#include <stdio.h>
#include <string.h>

typedef struct setup1 {
    int input1;
    int input2;
    int dc;
} DirectCurrentConfig;

void moveDirectCurrent(int i, int mode1, int mode2, int speed) {
  digitalWrite(pin[i].input1, mode2);
  digitalWrite(pin[i].input2, mode2);
  analogWrite(pin[i].dc, speed);
}

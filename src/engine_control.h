#include <engine_control_component.h>

void engine_control(int pin, int engine_id, int mode, int speed) {
  digitalWrite(pin, mode);
  if(speed != "") {
    analogWrite(engine_id, speed);
  }
}

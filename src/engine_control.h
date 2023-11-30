#include <servo_component.h>
#include <dc_component.h>

void dc_control(int pin, int engine_id, int mode, int speed) {
  digitalWrite(pin, mode);
  if(speed != "") {
    analogWrite(engine_id, speed);
  }
}

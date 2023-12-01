int attachedInput1 = 0;
int attachedInput2 = 0;

void attachInput1(int pin) {
  attachedInput1 = pin;
}

void attachInput2(int pin) {
  attachedInput2 = pin;
}

void moveDC(int pin, int mode, int speed) {
  digitalWrite(pin, mode);
  if(speed != "") {
    analogWrite(engine_id, speed);
  }
}

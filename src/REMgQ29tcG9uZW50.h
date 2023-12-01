int attachedInput1 = 0;
int attachedInput2 = 0;

void attachInput1(int pin) {
  attachedInput1 = pin;
}

void attachInput2(int pin) {
  attachedInput2 = pin;
}

void Input1(int mode, int speed) {
  digitalWrite(attachedInput1, mode);
  if(speed != "") {
    analogWrite(dc_pin, speed);
  }
}
int attachedInput1 = 0;
int attachedInput2 = 0;
int attachedEngine = 0;

void attachInput1(int pin) {
  attachedInput1 = pin;
}

void attachInput2(int pin) {
  attachedInput2 = pin;
}

void attachEngine(int pin) {
  attachedEngine = pin;
}

void attach(int input1, int input2, int engine) {
  attachInput1(input1);
  attachInput2(input2);
  attachEngine(engine);
}

void Input1(int mode, const speed) {
  digitalWrite(attachedInput1, mode);
  if(speed != "") {
    analogWrite(attachedEngine, speed);
  }
}

void Input2(int mode, int speed) {
  digitalWrite(attachedInput2, mode);
  if(speed != "") {
    analogWrite(attachedEngine, speed);
  }
}

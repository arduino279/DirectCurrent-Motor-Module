struct setup {
    int input1;
    int input2;
    int dc;
};

void moveDC(int pin_number, int mode, const speed) {
  digitalWrite(pin[pin_number].input[input_number], mode);
  if(speed != "") {
    analogWrite(pin[pin_number].dc, speed);
  }
}

struct setup {
    int input1;
    int input2;
    int dc;
};

void moveDC(int mode, const speed) {
  digitalWrite(setup.input1, mode);
  if(speed != "") {
    analogWrite(setup.dc, speed);
  }
}

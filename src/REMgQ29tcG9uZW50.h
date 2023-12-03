struct setup {
    int input1;
    int input2;
    int dc;
};

void moveDC(int i, int mode1, int mode2, const speed) {
  digitalWrite(pin[i].input1, mode2);
  digitalWrite(pin[i].input2, mode2);
  if(speed != "") {
    analogWrite(pin[i].dc, speed);
  } 
}

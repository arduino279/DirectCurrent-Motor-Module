class DirectCurrent {
    public:
      int input1;
      int input2;
      int dc;
      move(DirectCurrent i, int mode1, int mode2, int speed);
};

void DirectCurrent::move(DirectCurrent i, int mode1, int mode2, int speed) {
    digitalWrite(i.input1, mode2);
    digitalWrite(i.input2, mode2);
    analogWrite(i.dc, speed);
}

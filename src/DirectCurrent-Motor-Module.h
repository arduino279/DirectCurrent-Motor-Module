class DirectCurrent {
  public:
      int input1;
      int input2;
      int dc;
      move1(int mode1, int mode2, int speed1) {
        digitalWrite(this->input1, mode2);
        digitalWrite(this->input2, mode2);
        analogWrite(this->dc, speed1);
      }
};

class DirectCurrent {
  public:
      int input1;
      int input2;
      int dc;
      void move(int mode1, int mode2, int speed) {
        digitalWrite(this->input1, mode1);
        digitalWrite(this->input2, mode2);
        analogWrite(this->dc, speed);
      }
};

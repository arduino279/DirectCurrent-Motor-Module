int engine1 = 12;
int input_pin1 = 9;
int input_pin2 = 8;
int engine2 = 13;
int input_pin3 = 10;
int input_pin4 = 11;

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

DirectCurrent motor1 = {9, 8, 12};
DirectCurrent motor2 = {10, 11, 13};

void setup() {
  pinMode(engine1, OUTPUT);    
  pinMode(engine2, OUTPUT);
  pinMode(input_pin1, OUTPUT);
  pinMode(input_pin2, OUTPUT);
  pinMode(input_pin3, OUTPUT);
  pinMode(input_pin4, OUTPUT);
}

void loop() {
  motor1.move(0, 0, 200);
  motor2.move(0, 0, 200);
}

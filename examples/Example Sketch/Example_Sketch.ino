#include <DirectCurrent-Motor-Module.h>

DirectCurrent example = { 1, 2, 3 }; /* Setup an class object with INPUT1 pin = 1, INPUT2 pin = 2 and DC motor pin = 3 */
example.move(example, 1, 0, 129); /* Move the DC motor with a speed of 129 and by using the INPUT1 pin to set the motor rotating forward */
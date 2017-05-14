#ifndef IR_H
#define IR_H
#include "mbed.h"
extern Serial pc;

class IRSensor {
public:
    DigitalOut _enable;
    AnalogIn _input;
  //  volatile short value; 
  
    IRSensor(PinName enable, PinName input) : _enable(enable), _input(input){}

    // Calculate an estimated IR value
    float readIR();

    //Get the number of cells away wall is
//    short cell_dist();

    //Shorthand for read()
    operator short() {
        return readIR();
    }
};

extern IRSensor rightIR;
extern IRSensor rightDiagonalIR;
extern IRSensor leftDiagonalIR;
/*
extern IRSensor rightDiagonalIR;
extern IRSensor rightFrontIR;
extern IRSensor leftFrontIR;
extern IRSensor leftDiagonalIR;
*/
extern IRSensor leftIR;


#endif
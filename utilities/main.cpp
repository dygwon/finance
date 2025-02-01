//
// main.cpp

// #include "IntRateCalculator.h"
#include "CompoundIntRateCalculator.h"

#include <iostream>

// the main function receives parameters passed to the program
int main(int argc, const char * argv[])
{
    if (argc != 4)
    {
        std::cout << "usage: progName <interest rate> <present value> <num periods>"
        << std::endl;
        return 1;
    }

    double rate = atof(argv[1]);
    double value = atof(argv[2]);
    int num_periods = atoi(argv[3]);

    CompoundIntRateCalculator cIRCalc(rate);
    double res = cIRCalc.multiplePeriod(value, num_periods);
    double contRes = cIRCalc.continuousCompounding(value, num_periods);
    
    std::cout << " future value for multiple period compounding is "
    << res << std::endl;
    std::cout << " future value for continous compounding is "
    << contRes << std::endl;

    return 0;
}

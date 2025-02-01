//
// main.cpp

// #include "IntRateCalculator.h"
// #include "CompoundIntRateCalculator.h"
#include "CashFlowCalculator.h"

#include <iostream>

// the main function receives parameters passed to the program
int main(int argc, const char * argv[])
{
    if (argc != 2)
    {
        std::cout << "usage: progName <interest rate>" << std::endl;
        return 1;
    }

    // double rate = atof(argv[1]);
    // double value = atof(argv[2]);
    // int num_periods = atoi(argv[3]);
    double rate = atof(argv[1]);

    // CompoundIntRateCalculator cIRCalc(rate);
    // double res = cIRCalc.multiplePeriod(value, num_periods);
    // double contRes = cIRCalc.continuousCompounding(value, num_periods);
    CashFlowCalculator cfc(rate);
    do {
        int period;
        std::cin >> period;
        if (period == -1) {
            break;
        }
        double value;
        std::cin >> value;
        cfc.addCashPayment(value, period);
    } while (1);

    // std::cout << " future value for multiple period compounding is "
    // << res << std::endl;
    // std::cout << " future value for continous compounding is "
    // << contRes << std::endl;
    double result = cfc.presentValue();
    std::cout << " The present value is " << result << std::endl;

    return 0;
}

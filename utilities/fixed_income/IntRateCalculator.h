//
// IntRateCalculator.h

#ifndef __FinancialSamples__IntRateCalculator__
#define __FinancialSamples__IntRateCalculator__

#include <iostream>
#include <cmath>

class IntRateCalculator {
    public:
        IntRateCalculator(double rate);
        IntRateCalculator(const IntRateCalculator &v);
        IntRateCalculator &operator =(const IntRateCalculator &v);
        ~IntRateCalculator();

        double singlePeriod(double value);
        double compoundInterest(double value, float periods);
    private:
        double m_rate;
};

inline double IntRateCalculator::singlePeriod(double value)
{
    double f = value * ( 1 + this->m_rate );
    return f;
}

inline double IntRateCalculator::compoundInterest(double value, float periods)
{
    double rate_factor = 1 + this->m_rate;
    double f = value * pow(rate_factor, periods);
    return f;
}

#endif /* defined(__FinancialSamples__IntRateCalculator__) */

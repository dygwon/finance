//
// CompoundIntRateCalculator.h

#ifndef __FinancialSamples__CompoundIntRateCalculator__
#define __FinancialSamples__CompoundIntRateCalculator__

#include <cmath>

class CompoundIntRateCalculator {
    public:
        CompoundIntRateCalculator(double rate);
        CompoundIntRateCalculator(const CompoundIntRateCalculator &v);
        CompoundIntRateCalculator &operator =(const CompoundIntRateCalculator &v);
        ~CompoundIntRateCalculator();

        double multiplePeriod(double value, int n);
        double continuousCompounding(double value, int n);
    private:
        double m_rate;
};

inline double CompoundIntRateCalculator::multiplePeriod(double value, int numPeriods)
{
    double f = value * pow(1+this->m_rate, numPeriods);
    return f;
}

inline double CompoundIntRateCalculator::continuousCompounding(double value, int numPeriods)
{
    double f = value * exp(this->m_rate * numPeriods);
    return f;
}


#endif /* defined(__FinancialSamples__CompoundIntRateCalculator__) */

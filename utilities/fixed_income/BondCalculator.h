//
// BondCalculator.h

#ifndef __FinancialSamples__CashFlowCalculator__
#define __FinancialSamples__CashFlowCalculator__

#include <string>

class BondCalculator {
    public:
        BondCalculator(
            const std::string institution,
            int numPeriods,
            double principal,
            double couponValue);
        BondCalculator(const BondCalculator &v);
        BondCalculator &operator =(const BondCalculator &v);
        ~BondCalculator();
    
        double interestRate();

    private:
        std::string m_institution;
        double m_principal;
        double m_coupon;
        int m_numPeriods;
};

#endif /* defined(__FinancialSamples__CashFlowCalculator__) */

//
// CompoundIntRateCalculator.cpp

#include "CompoundIntRateCalculator.h"

CompoundIntRateCalculator::CompoundIntRateCalculator(double rate) : m_rate(rate)
{

}

CompoundIntRateCalculator::~CompoundIntRateCalculator()
{

}

CompoundIntRateCalculator::CompoundIntRateCalculator(const CompoundIntRateCalculator &v)
: m_rate(v.m_rate)
{

}

CompoundIntRateCalculator &CompoundIntRateCalculator::operator=(const CompoundIntRateCalculator &v)
{
    if (&v != this)
    {
        this->m_rate = v.m_rate;
    }
    return *this;
}

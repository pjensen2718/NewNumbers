#ifndef PRECISENUMBER_H
#define PRECISENUMBER_H

#include "BigNumber.h"

using namespace std;



// like the IEEE-754 float, but bigger
// should the exponent and mantissa be configurable by the user?
class PreciseNumber {
    public:

    private:
        bool sign; // 0 if positive, 1 if negative
        BigNumber exponent;
        BigNumber mantissa;
};

ostream & operator<<(ostream &os, const PreciseNumber &num);
istream & operator>>(ostream &is, const PreciseNumber &num);

// addition operator
PreciseNumber & operator+(const PreciseNumber &lhs, const PreciseNumber &rhs);

// subtraction operator
PreciseNumber & operator-(const PreciseNumber &lhs, const PreciseNumber &rhs);

// multiplication operator
PreciseNumber & operator*(const PreciseNumber &lhs, const PreciseNumber &rhs);

// division operator
PreciseNumber & operator/(const PreciseNumber &lhs, const PreciseNumber &rhs);

// modulo operator
PreciseNumber & operator%(const PreciseNumber &lhs, const PreciseNumber &rhs);

#endif // PRECISENUMBER_H
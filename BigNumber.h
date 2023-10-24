#ifndef BIGNUMBER_H
#define BIGNUMBER_H

#include <cstdint>
#include <deque>

using namespace std;

class BigNumber {
    public:


        
    private:
        deque<uint32_t> segments;
};

ostream & operator<<(ostream &os, const BigNumber &num); // print to stream
istream & operator>>(istream &is, BigNumber &num); // get from stream

// + operator
BigNumber & operator+(const BigNumber &lhs, const BigNumber &rhs);

// - operator
BigNumber & operator-(const BigNumber &lhs, const BigNumber &rhs);

// * operator
BigNumber & operator*(const BigNumber &lhs, const BigNumber &rhs);

// / operator
BigNumber & operator/(const BigNumber &lhs, const BigNumber &rhs);

// % operator
BigNumber & operator%(const BigNumber &lhs, const BigNumber &rhs); // two BigNumbers

#endif // BIGNUMBER_H
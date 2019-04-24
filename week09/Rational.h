#pragma once
#include <iostream>
#include "tools.h"

//Rational Fraction
class Rational{
public:
    Rational() = default;
    Rational(int a_, int b_);
    bool operator>(const Rational& o)const; //larger than
    bool operator<(const Rational& o)const; //smaller than
    bool operator==(const Rational& o)const; //equal to

    friend std::ostream& operator<<(std::ostream& os, const Rational&); //stream operator overload
private:
    int a; //numerator
    int b; //denominator
};
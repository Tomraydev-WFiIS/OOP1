#include "Rational.h"

Rational::Rational(int a_, int b_){
    a = abs(a_);
    b = abs(b_);
    if( ((a_<0)&&(b_>0)) || ((b_<0)&&(a_>0)) ){
        a = -a;
    }
}

std::ostream &operator<<(std::ostream &os, const Rational &obj) {
    os << obj.a << "/" << obj.b; 
    return os;
}

bool Rational::operator>(const Rational& o)const{
    int val1 = a * o.b;
    int val2 = o.a * b;
    return (val1>val2)?(true):(false);
}

bool Rational::operator<(const Rational& o)const{
    int val1 = a * o.b;
    int val2 = o.a * b;
    return (val1<val2)?(true):(false);
}

bool Rational::operator==(const Rational& o)const{
    if( (a ==o.a) && (b == o.b)){
        return true;
    }else {
        return false;
    }
}
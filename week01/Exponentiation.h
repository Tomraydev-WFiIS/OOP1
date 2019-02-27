#pragma once
#include<cmath>

class Exponentiation : public Operation {
    public:
        Exponentiation(double, double);
        void print()const;
        double eval()const;

    private:
        double x_;
        double y_;
};
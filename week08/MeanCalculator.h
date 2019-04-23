#pragma once
#include<vector>
#include "mean.h"
#include "MyTroubles.h"

//Calculate means (Arithmetic, Geometric or Harmonic)
class MeanCalculator {
    public:
        MeanCalculator(double *, const int); // Takes an array of doubles and size
        std::vector<double> getVec(void)const; // Returns the vector of elements
        void printMean(int);
        double& operator[](int index); // Returns 
        MeanCalculator& operator++(void); // Add 1 to all elements
    private:
        std::vector<double> vec; // Vector of elements
};

std::ostream &operator<<(std::ostream &stream, const MeanCalculator &obj);

namespace means{
    const int ARITHMETIC = 0;
    const int GEOMETRIC = 1;
    const int HARMONIC = 2;
}
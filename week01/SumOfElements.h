#pragma once

class SumOfElements : public Operation {
    public:
        SumOfElements(double *tab, int size);
        void print()const;
        double eval()const;
    private:
        double *A_;
        double size_;
};
#pragma once

#include "Operation.h"

class Division : public Operation {
    public:
        Division(int, int);
        void print()const;
        double eval()const;

    private:
        int x_;
        int y_;
};
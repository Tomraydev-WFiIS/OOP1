#pragma once

class Operation {
    public:
        virtual ~Operation() {};
        virtual void print()const = 0;
        virtual double eval()const = 0;

};

void operator>>=(const char *, const Operation&);
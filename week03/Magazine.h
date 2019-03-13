#pragma once
#include <iostream>
#include <string>
#include "Publication.h"

class Magazine : public Publication {
    public:
        Magazine(std::string str);
        void set_month(int);
        ~Magazine(){};

        void print();

    private:
        int month_; 
};
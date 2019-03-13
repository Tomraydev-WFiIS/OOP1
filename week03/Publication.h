#pragma once
#include <iostream>
#include <string>

/*
Main class
*/
class Publication {
    public:
        Publication() = default;
        virtual ~Publication(){};
        virtual void print() = 0;
        void set_price(double);
        double get_price(void);

    protected:
        std::string title_; // Title of the publication
        double price_; // price of the publication
};
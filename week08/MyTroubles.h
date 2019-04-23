#pragma once
#include <iostream>
#include <string>
//Exception class
class MyTroubles {
    public:
        MyTroubles(std::string); //Exception description
        MyTroubles(std::string, int); //Exception description and index number
        std::string what()const;
    private:
        std::string text;
};
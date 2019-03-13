#include "Magazine.h"
#include <string>
#include <iostream>

Magazine::Magazine(std::string str){
    title_ = str;
}

void Magazine::set_month(int m){
    month_ = m;
    return;
}

void Magazine::print(){
    std::cout << "title: " << title_ << std::endl;
    std::cout << "price: " << price_ << std::endl;
    std::cout << "month: " << month_ << std::endl;
    std::cout << std::endl;
    return;
}
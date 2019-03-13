#include "Publication.h"
#include <string>
#include <iostream>

void Publication::set_price(double p){
    price_ = p;
    return;
}

double Publication::get_price(void){
    return price_;
}
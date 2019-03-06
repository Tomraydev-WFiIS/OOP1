#include<iostream>
#include<cmath>
#include"Sin.h"

double Sin::operator()(double val)const{
    return sin(a_*val);
}
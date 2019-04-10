#include "AssumptionError.h"

std::string AssumptionError::what()const{
    return text;
}

AssumptionError::AssumptionError(std::string str){
    text = str;
}
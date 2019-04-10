#include "IllegalOperation.h"

std::string IllegalOperation::what()const{
    return text;
}

IllegalOperation::IllegalOperation(std::string str){
    text = str;
}
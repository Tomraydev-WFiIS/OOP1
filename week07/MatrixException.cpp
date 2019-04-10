#include "MatrixException.h"

std::string MatrixException::what()const{
    return text;
}

MatrixException::MatrixException(std::string str){
    text = str;
}
#include "MyTroubles.h"

MyTroubles::MyTroubles(std::string str){
    text = str;
}
MyTroubles::MyTroubles(std::string str, int i){
    text = str + std::to_string(i);
}

std::string MyTroubles::what()const{
    return text;
}
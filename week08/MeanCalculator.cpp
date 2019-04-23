#include <iostream>
#include <string>
#include "MeanCalculator.h"

MeanCalculator::MeanCalculator(double *a,const int n){
    for(int i = 0; i < n; i++){
        vec.push_back(a[i]);
    }
}

std::vector<double> MeanCalculator::getVec(void)const{
    return vec;
}

std::ostream &operator<<(std::ostream &stream, const MeanCalculator &obj) {
    std::vector<double> vec = obj.getVec();
    for(unsigned int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    return stream;
}

void MeanCalculator::printMean(int type){
    try{
        switch(type){
            case 0:
                {
                double mean = arithmeticMean(vec, vec.size());
                std::cout << "Arytmetyczna: " + std::to_string(mean) << std::endl;
                return;
                }
            case 1:
                {
                double mean = geometricMean(vec, vec.size());
                std::cout << "Geometryczna: " + std::to_string(mean) << std::endl;
                return;
                }
            case 2:
                {
                double mean = harmonicMean(vec, vec.size());
                std::cout << "Harmoniczna: " + std::to_string(mean) << std::endl;
                return;
                }
        }
    }
    catch (MyTroubles& e){
        std::string message = "zlapalismy: " + e.what();
        std::cout <<  message << std::endl;
    }

}

double& MeanCalculator::operator[](int index){
    if(index > vec.size()){
        throw MyTroubles("Array index out of bounds: ", index);
    }
    return vec[index];
}

MeanCalculator& MeanCalculator::operator++(void){
    for(unsigned int i =0 ;i < vec.size(); i++){
        vec[i] +=1;
    }
    return *this;
}
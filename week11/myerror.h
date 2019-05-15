#include <exception>
#include <string>
#include <iostream>


//namespace do obsugi wyjatkow
namespace myerror {

//Obsluz odpowiedni wyjatek
void handle(){
        try{
            throw; // przerzucanie zlapanego wyjatku dalej
        }
       catch(std::exception &e){
           std::cout << e.what() << std::endl;
       }
        return;
    }
}
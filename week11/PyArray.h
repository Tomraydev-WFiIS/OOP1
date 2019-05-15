#pragma once
#include <iostream>
#include <stdexcept>

//funkcja szablonowa zwracajaca wieksza z dwoch wartosci
template <typename T, typename R>
double myMax(const T &a, const R &b){
    if(a > b) return a;
    else return b;
}

//funkcja szablonowa zwracajaca sume elementow z dwoch kontenerow (z klay PyArray w tym wypadku)
template <typename T, typename R>
double mySum(const T &a, const R &b){
    double s = 0;
    s += a.getSum();
    s += b.getSum();
    return s;
}

template <typename T, const int n>
class PyArray {
    
    //dane przechowywame przez kontener
    T * data;

    //rozmiar kontenera
    int size;

    public:
        //konstruktor klasy PyArray
        PyArray(){
            this->data = new T[n];
            this->size = n;
        }

        //destruktor klasy PyArray
        ~PyArray(){delete [] this->data;}

        //metoda zwracajaca sume elementow z kontenera
        double getSum() const{
            double s = 0;
            for(int i = 0; i < this->size; i++) s+= this->data[i];
            return s;
        }

        //przeciazony operator [] zwracajacy reference do elementu pod danym indeksem
        T& operator[](int index){
            if(index >= 0){
                if(index >= this->size){
                   std::string message = "index " + std::to_string(index) + " is too large";
                   std::out_of_range wyj(message);
                   throw wyj;
                }else{
                    return this->data[index];
                }
            }else{
                if(index < -this->size){
                   std::string message = "index " + std::to_string(index) + " is too small";
                   std::out_of_range wyj(message);
                   throw wyj;
                }else{
                    int ind = index*(-1);
                    return this->data[size - ind];
                }
            }
        }

        //metoda wypisujaca zawartosc kontenera
        void print(){
            for(int i = 0; i < this->size; i++) std::cout << this->data[i] << " ";
            std::cout << std::endl;
        }
};
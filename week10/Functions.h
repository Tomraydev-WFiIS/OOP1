#pragma once
#include "Array.h"
#include <iostream>
#include <string>

//Prints an array
template<class T>
void print(T& tab, const int size){
    for(int i = 0; i < size; i++){
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    return;
}

//comparator template
template<class T>
bool compare(T& a, T& b){
    return (a>b)?(1):(0);
}

//comparator specialized for strings (compare by length)
bool compare(std::string& a, std::string& b){
    return (a.length() > b.length() )?(1):(0);
}

//swapper template
template<class T>
void swap_values(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
    return;
}

//bubble sort in place array of type T
template<class T>
void bubble_sort(T& tab, const int size){
    for (int i = 0; i < size; i++ ){
        for (int j = i+1; j < size; ++j ){
			if (compare(tab[i], tab[j]) ){
                swap_values(tab[i], tab[j]);
            }
        }
    }	
}

//Calculates the factorial of a given integer
int getFactorial(int val){
    int result = 1;
    for(int i = 1; i <= val; i++ ){
        result = result * i;
    }
    return result;
}

template <int T>
class factorial{
    public:
        static int value;
};

template <int T>
int factorial<T>::value = getFactorial(T);
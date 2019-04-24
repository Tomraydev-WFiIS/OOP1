#pragma once

namespace tools {

//Returns the smaller of two arguments
template<class T>
T smaller(T a, T b){
    return (a<b)?(a):(b);
}

//Returns the larger of two arguments
template<class T>
T larger(T a, T b){
    return (a>b)?(a):(b);
}

/*
Finds the index of a value "val" in an array "data".
If the element is not in the array returns (size+1).
*/
template<class T>
int find(T* data, int size, T val){
    for(int i = 0; i < size; i++){
        if(data[i] == val){
            return i;
        }
    }
    return size;
}


}


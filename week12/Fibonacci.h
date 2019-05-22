#pragma once

int getFibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int f2 = 1;
    if (n < 0){
        for(int i = 0; i > n+1; i--){
            f2 = f0 - f1;
            f0 = f1;
            f1 = f2;
        }
        return f2;
    }
    else if (n == 0){
        return f0;
    }
    else if (n == 1){
        return f1;
    }
    else {
        for(int i = 0; i < n-1; i++){
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }
        return f2;
    }
    
}

template <int T>
class fibonacci {
   public:
    static int value;
};

template <int T>
int fibonacci<T>::value = getFibonacci(T);
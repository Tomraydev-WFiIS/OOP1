#pragma once

//Array of integers class 
class Array {
    public:
        Array() = default;
        Array(int size_); //size_ determines the length of the array
        ~Array();
        int& operator[](int i);
    private:
        int size;
        int* tab; //pointer to the elements of an array
};
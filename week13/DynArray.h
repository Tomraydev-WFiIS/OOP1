#pragma once
#include <iostream>
#include <string>
#include <vector>

template<typename T>
class DynArray {
    private:
        int _size;
        std::vector<T> vec;
    public:
        DynArray(int s): _size(s){
            vec = std::vector<T>(_size);
        }
        DynArray(int s,const T* arr): _size(s){
            vec = std::vector<T>(_size);
            for(int i = 0; i < _size; i++){
                vec[i] = arr[i];
            }
        }

        int size(void)const{
            return _size;
        }
        T& operator[](int i){
            return vec[i];
        }
        const T& get_const_ref(int i)const{
            return vec[i];
        }
        class Iterator {
            public:
                Iterator(T& p): _pointer(&p){};
                bool operator!=(const Iterator& It){
                    if( _pointer == It._pointer ){
                        return false;
                    }else {
                        return true;
                    }
                }
                void operator++(void){
                    _pointer++;
                }
                T operator*(){
                    return *_pointer;
                }
                T* operator->(void){
                    return _pointer;
                }
            private:
                T* _pointer;
        };
        Iterator begin(){ return Iterator(vec[0]);}
        Iterator end(){ return Iterator(vec[_size]);}
};

template<typename T>
std::ostream& operator<<(std::ostream &o, const DynArray<T> &arr){
    int i;
    o << "{";
    for(i = 0; i < arr.size() -1; i++){
        o << "\"";
        o << arr.get_const_ref(i);
        o << "\",";
    }
    o << "\"";
    o << arr.get_const_ref(i);
    o << + "\"";
    o << "}";
    return o;
}

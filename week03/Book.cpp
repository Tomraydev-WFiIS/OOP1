#include "Book.h"
#include <string>
#include <iostream>

Book::Book(std::string str, int max_chapters){
    title_ = str;
    max_chapters_ = max_chapters;
    chapters_ = new std::string[max_chapters_];
}

void Book::add_chapter(std::string str){
    chapters_[n_chapters_] = str;
    n_chapters_++;
    return;
}

void Book::print(){
    std::cout << "title: " << title_ << std::endl;
    std::cout << "price: " << price_ << std::endl;
    for(int i = 0; i < max_chapters_; i++){
        std::cout << chapters_[i] << std::endl;
    }
    std::cout << std::endl;
    return;
}
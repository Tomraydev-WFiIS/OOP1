#pragma once
#include <iostream>
#include <string>
#include "Publication.h"



class Book : public Publication {
    public:
        Book(std::string str, int n_chapters);
        ~Book(){
            delete[] chapters_;
        };
        void add_chapter(std::string str);
        void print();
        

    private:
        int max_chapters_; // Total number of chapters
        int n_chapters_ = 0;
        std::string * chapters_;   // Array of chapters (strings)
};
#pragma once
#include <iostream>
#include <string>
#include <vector>

class Element {
    public:
        virtual ~Element(){};

        std::string get_o_tag()const; // returns the opening tag
        std::string get_text()const; // return the text
        std::string get_c_tag()const; // returns the closing tag

        void add(const Element* E); // Add a neted element
        const std::vector<Element> * get_vec()const; // get the vector of all nested elements

    protected:
        std::string text_; //Element's text
        std::string o_tag; //Opening tag
        std::string c_tag; //Closing tag
        std::vector<Element> vec; // Vector of nested elements
};

std::ostream& operator<<(std::ostream& stream, const Element &E); // Outputs all the contents
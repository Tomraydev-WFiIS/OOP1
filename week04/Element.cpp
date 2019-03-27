#include "Element.h"

// Element::~Element(){
//     for(unsigned int i = 0; i < vec.size(); i++){
//         delete vec.size();
//     };
// }



std::string Element::get_o_tag()const{
    return o_tag;
}

std::string Element::get_text()const{
    return text_;
}

std::string Element::get_c_tag()const{
    return c_tag;
}
const std::vector<Element> * Element::get_vec()const{
    return &vec;
}

std::ostream& operator<<(std::ostream& stream, const Element &E){
    std::cout << E.get_o_tag();
    std::cout << E.get_text();
    if(!E.get_vec()->empty() ){
        for(unsigned int i = 0; i < E.get_vec()->size(); i++){
            std::cout << (*E.get_vec())[i] << std::endl;
        };
    }
    std::cout << E.get_c_tag();
    return stream;
}

void Element::add(const Element* E){
    vec.push_back(*E);
    return;
}
#include "Header.h"

Header::Header(const std::string &str, int size){
    size_ = size;

    o_tag = "<h" + std::to_string(size_) + ">";
    text_ = str;
    c_tag = "</h" + std::to_string(size_)  + ">";
}

int Header::get_size()const{
    return size_;
}

// std::ostream& operator<<(std::ostream& stream, const Header &E){
//     std::cout << "<h" << E.get_size() << ">";
//     std::cout << E.get_text();
//     std::cout << "</h" << E.get_size() << ">" << std::endl;
//     return stream;
// }
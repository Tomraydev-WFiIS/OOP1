#include "PlainText.h"

PlainText::PlainText(const std::string &str){
    o_tag = "";
    text_ = str;
    c_tag = "";
}

// std::ostream& operator<<(std::ostream& stream, const PlainText &E){
//     std::cout << E.get_text() << std::endl;
//     return stream;
// }
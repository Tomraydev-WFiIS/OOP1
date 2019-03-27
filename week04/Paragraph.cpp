#include "Paragraph.h"

Paragraph::Paragraph(const std::string &str){
    o_tag = "<p>";
    text_ = str;
    c_tag = "</p>";
}
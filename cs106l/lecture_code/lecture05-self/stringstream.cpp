#include <iostream>
#include <sstream>

void foo() {
    std::string initial_quote = "Bjarne Stroustrup C makes it easy to shoot yourself in the foot"; 

    // create a stringstream object
    std::stringstream ss;
    ss << initial_quote;
    
    // data destinations
    std::string first;
    std::string last;
    std::string language, extracted_quote;
    
    // question: The `>>` operator only reads until the next whitespace!
    // ss >> first >> last >> language >> extracted_quote;
    // std::cout << first << " " << last << " said this: " << language << " " << extracted_quote << std::endl;

    // using getline
    ss >> first >> last >> language;
    std::getline(ss, extracted_quote);
    std::cout << first << " " << last << " said this: `" << language << " " << extracted_quote + "`" << std::endl;
}

int main() {

    foo();
    return 0;
}
#include <iostream>
#include <sstream>
#include <fstream>

void cinFailure() {
    double pi;
    double tao;
    std::string name;
    std::cin >> pi; // 3.14
    std::cin >> name; // "Bjarne Stroustrup"
    std::cin >> tao; // 6.28
    std::cout << "pi: " << pi << ", name: " << name << ", tao: " << tao << std::endl;
}

void cinGetlineBug() {
    double pi;
    double tao;
    std::string name;
    std::cin >> pi; // 3.14
    std::getline(std::cin, name); // "Bjarne Stroustrup"
    // The getline will consume the newline character left in the input buffer
    
    std::cin >> tao; // 6.28
    // tao is going to be garbage because the buffer is not empty

    std::cout << "pi: " << pi << ", name: " << name << ", tao: " << tao << std::endl;
}

void cinGetline() {
    double pi;
    double tao;
    std::string name;
    std::cin >> pi;
    std::getline(std::cin, name);
    std::getline(std::cin, name);
    std::cin >> tao;
    
    std::cout << "pi: " << pi << ", name: " << name << ", tao: " << tao << std::endl;
}

int main() {
    // cinFailure();
    cinGetlineBug();

    return 0;
}
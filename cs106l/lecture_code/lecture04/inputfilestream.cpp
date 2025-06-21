#include <iostream>
#include <sstream>
#include <fstream>

int main() {
    std::ifstream ifs("hello.txt"); // create an input file stream to "hello.txt"
    
    if (ifs.is_open()) {
        std::string line;
        while (std::getline(ifs, line)) { // read lines from the file
            std::cout << line << std::endl; // output each line to the console
        }
    } else {
        std::cerr << "Error: Could not open file hello.txt" << std::endl;
    }

    return 0;
}
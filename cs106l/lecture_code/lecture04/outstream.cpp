#include <iostream>
#include <sstream>
#include <unistd.h> // for sleep function

int main() {
    double tao = 6.28;
    std::cout << tao;
    std::cout << std::flush; // flush the output buffer
    // also flush
    // std::cout << std::endl; 

    std::cout << "This may not appear immediately.";
    sleep(3); // wait for 3 seconds
    std::cout << std::endl; // flush by adding a newline

    // or explictly flush the output buffer
    // std::cout << std::flush; 
}
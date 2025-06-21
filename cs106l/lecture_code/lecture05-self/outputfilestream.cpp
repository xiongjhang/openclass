#include <iostream>
#include <sstream>
#include <fstream>

int main() {
    // associating file on construction
    std::ofstream ofs("hello.txt"); // create an output file stream to "hello.txt"

    if (ofs.is_open()) {
        ofs << "Hello, world!" << std::endl;
    }
    ofs.close();
    ofs << "This will not work, because the file is closed!";

    ofs.open("hello.txt", std::ios::app); // reopen in append mode
    ofs << "This will work, because the file is reopened!" << std::endl;

    return 0;
}
#include <iostream>
#include <tuple>
#include <string>

using Class = std::tuple<std::string, std::string, std::string>;

Class getClassInfo() {
    // return {"C++", "Structured Binding", "Lecture 03"};
    
    std::string className = "CS106L";
    std::string buildingName = "260-1143";
    std::string language = "C++";
    return {className, buildingName, language}; // Uniform initialization
}

int main() {
    // g++ -static-libstdc++ -std=c++20 structured_binding.cpp -o main

    // way 1: Using structured binding to unpack the tuple
    auto [className, buildingName, language] = getClassInfo();

    // way 2: Using std::get to access tuple elements
    auto classInfo = getClassInfo();
    std::string className = std::get<0>(classInfo);
    std::string buildingName = std::get<1>(classInfo);
    std::string language = std::get<2>(classInfo);

    std::cout << "Come to " << buildingName 
              << " and joing us for " << className 
              << " to learn " << language << "!" << std::endl;
}
#include <iostream>
#include <map>
#include <vector>

int main() {
	//Direct Initialization
	int a = 12.0; // This will cause a warning or error in strict mode
	int b(12.0); // This will also cause a warning or error in strict mode
	// /*
	// You can use `-Wno-xxx` to disable specific warnings in GCC or Clang.
	// For example, to disable the warning for narrowing conversions:
	// 	g++ -static-libstdc++ -std=c++20 -Wno-narrowing initialization.cpp -o main
	// */
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;

	// Uniform Initialization, will fail if narrowing occurs
	// g++ -static-libstdc++ -std=c++20 initialization.cpp -o main
	int numOne{12.0};
	// int numOne{12}; // This is fine, no narrowing occurs
	float numTwo{12.0};
	std::cout << "numOne is: " << numOne << std::endl;
	std::cout << "numTwo is: " << numTwo << std::endl;

	// Uniform initialization of a map
	std::map<std::string, int> ages {
		{"Alice", 30},
		{"Bob", 25},
		{"Charlie", 35}
	};
	// Accessing elements in the map
	std::cout << "Alice's age: " << ages["Alice"] << std::endl;
	std::cout << "Bob's age: " << ages["Bob"] << std::endl;

	// Uniform initialization of a vector
	std::vector<int> numbers {1, 2, 3, 4, 5};
	// Accessing elements in the vector
	for (auto number : numbers) {
		std::cout << number << " ";
	}
	std::cout << std::endl;

	return 0;
}

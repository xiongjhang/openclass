#include <iostream>
#include <math.h>
#include <vector>
#include <utility> // for std::pair

#define WITH_REF 0

/*
 * This is called a preprocessor macro, in the compilation step
 * the preprocessor, will decide which one of the function
 * signatures to keep depending on whether or not the variable
 * 'WITH_REF' is truthy. 
 */
#if WITH_REF
void squareN(int& n) 
#else
void squareN(int n)
#endif
{
	n = std::pow(n, 2);
}

void shift(std::vector<std::pair<int, int>> &nums)
#if WITH_REF
{
	for (auto& [num1, num2] : nums) {
		num1++;
		num2++;
	}
}
/* also works
{
	for (size_t i = 0; i < nums.size(); i++) {
		nums[i].first++;
		nums[i].second++;
	}
}
*/
#else
{
	for (auto [num1, num2] : nums) {
		num1++;
		num2++;
	}
}
#endif

int main() {
	// g++ -static-libstdc++ -std=c++20 references.cpp -o main

	int num = 5;
	std::cout << "(1) num is: " << num << std::endl;
	#if WITH_REF
	squareN(num);
	#else
	squareN(5);
	#endif
	std::cout << "(2) num is " << num << std::endl;


	// A classic reference-copy bug
	std::vector<std::pair<int, int>> nums = {{1, 2}, {3, 4}, {5, 6}};
	shift(nums);
	std::cout << "(3) nums are: ";
	for (const auto& [num1, num2] : nums) {
		std::cout << "(" << num1 << ", " << num2 << ") ";
	}

	return 0;
}


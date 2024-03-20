/* Problem 6
The sum of the squares of the first ten natural numbers is, 1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */
#include <iostream>
#include <vector>

int main() {
	int number [100];
	int result1 {0}, result2 {0};
	
	for(int i {0}; i < 100; ++i) 
		number[i] = i+1;
	for(int i {0}; i < 100; ++i) 
		result1 += number[i]*number[i];			
	for(int i {0}; i < 100; ++i)
		result2 += number[i];
	result2 = result2*result2;
	std::cout << result2-result1;
	
	return 0;
}

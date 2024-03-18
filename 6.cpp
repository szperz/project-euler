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

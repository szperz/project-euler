/* Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143? */
#include <iostream>
#include <cmath>

bool czyPierwsza(long long x) {
	for(long long i = 2; i < sqrt(x); i++)
		if(x % i == 0)
			return false;
	
	return true;
}

int main() {
	long long a = 600851475143;
	
	for(long long i = 2; i < sqrt(a); i++) {
		if(a % i == 0)
			if(czyPierwsza(i))
				std::cout << i << " ";
	}
	
	return 0;
}

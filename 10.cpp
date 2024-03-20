/* Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
Find the sum of all the primes below two million. */
#include <iostream>
#include <cmath>

bool isPrime(long long n) {
    if (n % 2 == 0)
    	return false;
    for (long long i {3}; i <= sqrt(n); i+= 2) {
            if (n % i == 0) 
                return false;
        }
    return true;
}

long long sumTotal(int x) {
	unsigned long long result {0};
	for(int i {3}; i < 2000000; i+=2)
		if(isPrime(i))
			result +=i;
	return result;
}

int main() {
	std::cout << sumTotal(2000000) + 2;
}

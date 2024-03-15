/* Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */
#include <iostream>

int main() {
	int a,b;
	a = 1;
	b = 2;
	int wynik;
	
	while(a && b < 4000000) {
		std::cout << a << " ";
		std::cout << b << " ";
		if(a % 2 == 0)
			wynik += a;
			
		if(b % 2 == 0)
			wynik += b;
			
		a = a + b;
		b = a + b;
	}
	
	std::cout << wynik;
	return 0;
}

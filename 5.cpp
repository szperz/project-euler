/* Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */
// 232792560 - low optimization for 20 numb. 2.5 sec runtime
#include <iostream>

int main() {
	int number = 1 * 2 * 3 * 4 *5 * 6 * 7 * 8 * 9 * 10 * 11 * 12 * 13 * 14 * 15 * 16 * 17 * 18 * 19 ;
	int a = 1;
	
	while(true) {
		for(int i = 1; i < 20; i++) {
			if(number % a == 0)
				a++;
			else
				a = 1;
				
			if(a == 20) {
				std::cout << number << " ";
				return 0;
			}
		}
		number += 20;
		
	}
	
	return 0;
}

/* Problem 4, solved using std::rand (not best solution)
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91*99
Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <iostream>
#include <ctime>
#include <cstdlib>

bool sprawdzam(int wynik) {
	char buffer[5];
	sprintf(buffer, "%d", wynik);
	
		if(buffer[0] == buffer[5] && buffer[1] == buffer[4] && buffer[2] == buffer[3])
				if(wynik > 900000) {
				std::cout << wynik << std::endl;
				return true;
			}
		
	return false;
}

int main() {
    srand(time(NULL));
    int liczba, liczba2;
    
    while(true) {
    	liczba = (std::rand() % 1000) + 1;
    	liczba2 = (std::rand() % 1000) + 1;
    	int wynik = liczba*liczba2;
    	if(sprawdzam(wynik))
    		break;
	}
    
}

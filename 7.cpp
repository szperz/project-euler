/* Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?*/

#include <iostream>

bool isPrime(int number) {
    if(number < 2)
        return false;

    for(size_t i {2}; i*i <= number; ++i) {
        if(number % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number {2};
    int counter {0};

    while (counter < 10001) {
        if (isPrime(number)) {
            counter++;
        }
        if(counter == 10001)
            std::cout << number;

        number++;
    }

    return 0;
}

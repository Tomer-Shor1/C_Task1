#include "NumClass.h"

int isPrime(int n){
    if (n < 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is divisible by i, so it's not a prime number
        }
    }
    
    return 1; // n is a prime number
}

//factorial function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n* factorial(n - 1);
}


int isStrong(int n){
        int originalNum = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return (sum == originalNum);
}
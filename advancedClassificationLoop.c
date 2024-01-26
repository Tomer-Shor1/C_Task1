#include "NumClass.h"

int power(int base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}

int isArmstrong(int n){
    int originalNumber = n;
    int sum = 0;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }

    while (n > 0) {
        int digit = n % 10;
        sum += power(digit, count);
        n /= 10;
    }

    if (sum == originalNumber){
        return 1;
    }
    else return 0;
}


int isPalindrome(int n){
    int originalNum = n;
    int reversedNum = 0;

    while (n > 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }

    if (reversedNum == originalNum){
        return 1;
    }
    else return 0;
}
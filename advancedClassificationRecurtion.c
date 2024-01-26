#include "NumClass.h"

int power(int base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}

int countDigits(int num) {
    if (num > 0)
        return 1 + countDigits(num / 10);
    else
        return 0;
}

int isArmstrongHelper(int num, int n) {
    if (num > 0)
        return (power((num % 10),n) + isArmstrongHelper(num / 10, n));
    else
        return 0;
}

int isArmstrong(int num) {
    
    int n = countDigits(num);
    return (num == isArmstrongHelper(num, n));
}



//helper function for isPalindrome 
int rev(int n, int temp) {
    // Base case
    if (n == 0)
        return temp;

    // Store the reverse of a number
    temp = (temp * 10) + (n % 10);

    return rev(n / 10, temp);
}

int isPalindrome(int n) {
    int temp = rev(n, 0);

    if (temp == n)
        return 1; // Yes, it is a palindrome
    else
        return 0; // No, it is not a palindrome
}
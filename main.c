#include "NumClass.h"
#include <stdio.h>


int main(){

int start, end;

    //scan from user
    scanf("%d", &start);
    scanf("%d", &end);


    //print amstrong numbers
    printf("The Armstrong numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    //print all palindrome numbers in range
    printf("\nThe Palindromes are: ");
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }

    //print all prime numbers in range
    printf("\nThe Prime numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    //print all strong numbers in range
    printf("\nThe Strong numbers are: ");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }


    return 0;
}
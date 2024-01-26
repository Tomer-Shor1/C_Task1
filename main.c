#include "NumClass.h"
#include <stdio.h>


int main(){

int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid input: Starting number should be less than or equal to the ending number.\n");
        return 1;
    }

    //print amstrong numbers
    printf("These are the armstrong numbers:");
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    //print all prime numbers in range
    printf("\nThese are the Prime numbers:");
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    //print all strong numbers in range
    printf("\nThese are the strong numbers:");
    for (int i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    //print all palindrome numbers in range
    printf("\nThese are the palindrome numbers:");
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
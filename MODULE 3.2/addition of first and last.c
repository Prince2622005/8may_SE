//Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5) 
#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Extracting the first digit
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    
    // Extracting the last digit
    lastDigit = number % 10;
    
    // Calculating the sum
    sum = firstDigit + lastDigit;
    
    printf("The sum of the first and last digits is: %d\n", sum);
    
    return 0;
}


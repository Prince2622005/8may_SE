WAP to find number is even or odd using ternary operator 
#include <stdio.h>

int main() {
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    (number%2==0) ? printf("Even"): printf("Odd");

    return 0;
}

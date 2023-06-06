// Reverse is also same as original input number
#include <stdio.h>

int isPalindrome(int num)
{
    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum)
        return 1;  // Number is a palindrome
    else
        return 0;  // Number is not a palindrome
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}


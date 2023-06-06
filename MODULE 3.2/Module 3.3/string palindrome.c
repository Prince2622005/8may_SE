#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome;

    printf("Enter a string: ");
    scanf("%s", str);

    // Reverse the string
    length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    // Check if the string is a palindrome
    isPalindrome = 1;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


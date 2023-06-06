#include <stdio.h>

int main() {
    int i, num;
    int evenCount = 0, oddCount = 0;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);

    return 0;
}


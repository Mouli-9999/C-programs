//WAp to read 10 integers and calculate sum of only odd numbers using continue.
//WAp to read 10 integers and calculate sum of only odd numbers using continue.
#include <stdio.h>

int main() {
    int i, num, sum = 0;

    printf("Enter 10 integer values:\n");

    for (i = 0; i < 100; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            // Skip even numbers
            continue;
        }

        sum += num;
    }

    printf("Sum of odd numbers: %d\n", sum);

    return 0;
}
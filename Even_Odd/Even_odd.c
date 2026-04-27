#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a whole number
    printf("Enter any whole number: ");
    scanf("%d", &number);

    // Use modulo operator to check if even or odd
    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
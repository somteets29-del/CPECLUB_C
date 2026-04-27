#include <stdio.h>

int main() {
    double num1, num2, result;
    char calculator;

    // Prompt user for input
    printf("=== Mini Calculator ===\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &calculator);   // space before %c is important

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation using switch
    switch(calculator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, or /\n", calculator);
            break;
    }

    return 0;
}
    
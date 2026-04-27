#include <stdio.h>

int main() {
    double a11, a12, b1;
    double a21, a22, b2;
    double D, Dx, Dy, x, y;

    // Step 1: Get input from user
    printf("Enter coefficients for the 2x2 system of equations:\n");
    printf("a11 x + a12 y = b1\n");
    printf("a21 x + a22 y = b2\n\n");

    printf("Enter a11, a12, b1: ");
    scanf("%lf %lf %lf", &a11, &a12, &b1);

    printf("Enter a21, a22, b2: ");
    scanf("%lf %lf %lf", &a21, &a22, &b2);

    // Step 2: Compute main determinant D
    D = a11 * a22 - a12 * a21;
    printf("\nMain determinant D = %.2f\n", D);

    // Step 3: Check if system has unique solution
    if (D == 0) {
        printf("No unique solution exists (system is singular or inconsistent).\n");
        return 0;
    }

    // Step 4: Compute Dx
    Dx = b1 * a22 - b2 * a12;
    printf("Dx = %.2f\n", Dx);

    // Step 5: Compute Dy
    Dy = a11 * b2 - a21 * b1;
    printf("Dy = %.2f\n", Dy);

    // Step 6: Solve for x and y
    x = Dx / D;
    y = Dy / D;

    // Step 7: Display the solution
    printf("\nSolution:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}
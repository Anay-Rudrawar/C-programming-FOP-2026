#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num, result;

    printf("Simple Calculator\n");
    printf("1. Power\n");
    printf("2. Factorial\n");
    printf("3. Addition\n");
    printf("4. Subtraction\n");
    printf("5. Multiplication\n");
    printf("6. Division\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and exponent: ");
            double base, exponent;
            scanf("%lf %lf", &base, &exponent);
            result = pow(base, exponent);
            printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);
            break;
        case 2:
            printf("Enter a number: ");
            int n;
            scanf("%d", &n);
            result = 1;
            for (int i = 1; i <= n; i++) {
                result *= i;
            }
            printf("Factorial of %d is %.0lf\n", n, result);
            break;
        case 3:
            printf("Enter two numbers: ");
            double a, b;
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, result);
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, result);
            break;
        case 6:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0) {
                result = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 7:
            printf("End of Program.\n");
            break;  
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
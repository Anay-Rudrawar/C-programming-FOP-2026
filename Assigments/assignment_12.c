// accept two numbers from user and compute smallest divisor and greatest common divisor
#include <stdio.h>
#include <stdlib.h>

// function to calculate greatest common divisor
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// function to calculate smallest divisor
int smallest_divisor(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate greatest common divisor
    int result_gcd = gcd(num1, num2);
    printf("Greatest Common Divisor of %d and %d is: %d\n", num1, num2, result_gcd);

    // Calculate smallest divisor for the first number
    int result_smallest_divisor = smallest_divisor(num1);
    printf("Smallest Divisor of %d is: %d\n", num1, result_smallest_divisor);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    double sqrt_result;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    sqrt_result = sqrt(num);

    int square = num * num;
    
    int cube = num * num * num;

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
    }

    printf("\nResults:\n");
    printf("Square Root of %d = %.2lf\n", num, sqrt_result);
    printf("Square of %d = %d\n", num, square);
    printf("Cube of %d = %d\n", num, cube);

    if (num >= 0)
    {
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}

// Program related to prime still remaining.
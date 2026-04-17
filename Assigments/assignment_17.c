// to accept the number of terms and find the sum of the sine series
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x, sum = 0.0;

    
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 2);
    }

    
    printf("The sum of the sine series is: %lf\n", sum);

    return 0;
}
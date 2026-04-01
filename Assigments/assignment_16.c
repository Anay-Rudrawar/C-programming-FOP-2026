// accept list of N integers and partition list into two sub lists even and odd numbers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int numbers[n];
    int even_numbers[n];
    int odd_numbers[n];
    int even_count = 0;
    int odd_count = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            even_numbers[even_count++] = numbers[i];
        } else {
            odd_numbers[odd_count++] = numbers[i];
        }
    }

    printf("\nEven numbers:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_numbers[i]);
    }
    printf("\n");

    printf("\nOdd numbers:\n");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_numbers[i]);
    }
    printf("\n");

    return 0;
}
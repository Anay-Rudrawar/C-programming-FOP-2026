
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;


    srand(time(0));

    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &n);

    printf("Generated random numbers:\n");
    for (i = 0; i < n; i++) {
        
        int randomNum = rand() % 100;
        printf("%d ", randomNum);
    }
    printf("\n");

    return 0;
}
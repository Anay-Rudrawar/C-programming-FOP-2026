// Write a C function to swap two numbers with and without using pointers.
#include <stdio.h>

void swapWithPointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutPointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before swapping with pointers: num1 = %d, num2 = %d\n", num1, num2);
    swapWithPointers(&num1, &num2);
    printf("After swapping with pointers: num1 = %d, num2 = %d\n", num1, num2);

    int num3 = 15, num4 = 20;
    printf("Before swapping without pointers: num3 = %d, num4 = %d\n", num3, num4);
    swapWithoutPointers(num3, num4);
    printf("After swapping without pointers: num3 = %d, num4 = %d\n", num3, num4);

    return 0;
}
#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;

           
}
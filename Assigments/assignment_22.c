// a menu driven program in c to perform various string operations using built in functions.
#include <stdio.h>
#include <string.h>
#define MAX 100

void reverse_string(char str[]) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void concatenate_strings(char str1[], char str2[]) {
    strcat(str1, str2);
}

void compare_strings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
}

int main() {
    char str1[MAX], str2[MAX];
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Compare two strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, MAX, stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                reverse_string(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(str1, MAX, stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, MAX, stdin);
                str2[strcspn(str2, "\n")] = '\0'; 
                concatenate_strings(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 3:
                printf("Enter first string: ");
                fgets(str1, MAX, stdin);
                str1[strcspn(str1, "\n")] = '\0'; 
                printf("Enter second string: ");
                fgets(str2, MAX, stdin);
                str2[strcspn(str2, "\n")] = '\0'; 
                compare_strings(str1, str2);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
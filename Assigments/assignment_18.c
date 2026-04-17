#include <stdio.h>
#include <string.h> 
#include <stdbool.h>

void reverseString(char str[]) {
    int length = strlen(str);
    char temp;

    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

bool isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[100], str2[100];

    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    
    printf("Length of the first string: %lu\n", strlen(str1));
    printf("Length of the second string: %lu\n", strlen(str2));

    
    reverseString(str1);
    printf("Reversed first string: %s\n", str1);

    
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    
    if (isPalindrome(str1)) {
        printf("The first string is a palindrome.\n");
    } else {
        printf("The first string is not a palindrome.\n");
    }

    
    if (strstr(str1, str2) != NULL) {
        printf("The second string is a substring of the first string.\n");
    } else {
        printf("The second string is not a substring of the first string.\n");
    }

    return 0;
}
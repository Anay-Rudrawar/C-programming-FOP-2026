#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase character\n");
    } else {
        printf("Not a lowercase character\n");
    }

    return 0;
}
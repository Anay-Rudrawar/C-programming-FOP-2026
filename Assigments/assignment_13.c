#include <stdio.h>

int main (){

    int num, digit = 0;

    printf("Enter a number :\n");
    scanf("%d", &num);

    printf("Digits in reverse order :");

    while(num>0) {
        digit = num % 10;
        printf("%d",digit);
        num = num / 10;
    }
    
    return 0 ;

}
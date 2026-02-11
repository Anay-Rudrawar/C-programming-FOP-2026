#include <stdio.h>

int main() {
    int marks[5], i;
    float total = 0, percentage;
    printf("Enter marks obtained in 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];

        if(marks[i] < 40) {
            printf("Student is Fail\n");
            return 0;
        }
}
    percentage = (total / 500.0) * 100;
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if(percentage >= 75) {
        printf("Grade: Distinction\n");
    } else if(percentage >= 60) {
        printf("Grade: First Division\n");
    } else if(percentage >= 50) {
        printf("Grade: Second Division\n");
    } else if(percentage >= 40) {
        printf("Grade: Third Division\n");
    } else {
        printf("Student is Fail\n");
    }
    return 0;
}
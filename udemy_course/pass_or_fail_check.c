#include <stdio.h>

int main() {
    float m1, m2, m3, total;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = (m1 + m2 + m3) / 3;

    if (total >= 40 && m1 >= 33 && m2 >= 33 && m3 >= 33) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}
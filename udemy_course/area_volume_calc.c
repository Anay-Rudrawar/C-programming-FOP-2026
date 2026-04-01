#include <stdio.h>

int main() {
    float r, h, area, volume;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter height: ");
    scanf("%f", &h);

    area = pi * r * r;
    volume = pi * r * r * h;

    printf("Area of circle = %.2f\n", area);
    printf("Volume of cylinder = %.2f\n", volume);

    return 0;
}
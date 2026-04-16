#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("The given sides form a triangle.\n");
    } else {
        printf("The given sides do NOT form a triangle.\n");
    }

    return 0;
}

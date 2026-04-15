#include <stdio.h>

int main() {
    float C, F;

    // Input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    // Conversion using formula
    F = (9.0/5.0) * C + 32;

    // Output
    printf("Temperature in Fahrenheit = %.2f", F);

    return 0;
}

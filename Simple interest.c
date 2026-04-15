#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, A;

    // Input from user
    printf("Enter Principal (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Time (T in years): ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    A = P * pow((1 + R/100), T);  // Amount
    CI = A - P;

    // Output
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}

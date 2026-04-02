#include <stdio.h>

int main() {

    float principal, rate, time, simpleInterest,a,ci;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;
    a=principal*(1+rate/100);
    ci=a-principal;

    
    printf("The Simple Interest is: %.2f", simpleInterest);
    printf("\n the ci:%.2f",ci);

    return 0;
}

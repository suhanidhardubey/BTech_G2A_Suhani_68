#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);   // space before %c to clear buffer

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Switch case
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}

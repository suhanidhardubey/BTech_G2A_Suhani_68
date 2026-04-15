#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter a binary number: ");
            scanf("%lld", &binary);

            while(binary != 0) {
                remainder = binary % 10;
                decimal += remainder * pow(2, i);
                binary /= 10;
                i++;
            }

            printf("Decimal = %d", decimal);
            break;

        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);

            printf("Binary = ");
            while(decimal != 0) {
                printf("%d", decimal % 2);
                decimal /= 2;
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}

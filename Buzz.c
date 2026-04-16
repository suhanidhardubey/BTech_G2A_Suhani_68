#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check Buzz number condition
    if (num % 7 == 0 || num % 10 == 7) {
        printf("The number is a Buzz number\n");
    } else {
        printf("The number is NOT a Buzz number\n");
    }

    return 0;
}

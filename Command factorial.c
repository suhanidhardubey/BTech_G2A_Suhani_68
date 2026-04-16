#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, n;
    long long fact = 1;

    // Check if argument is provided
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert argument to integer
    n = atoi(argv[1]);

    // Check for negative number
    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
        return 1;
    }

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    // Display result
    printf("Factorial of %d = %lld\n", n, fact);

    return 0;
}

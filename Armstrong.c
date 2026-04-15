#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, result, n;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for (num = 1; num <= 100; num++) {
        temp = num;
        result = 0;

        // Count number of digits
        n = 0;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check Armstrong condition
        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

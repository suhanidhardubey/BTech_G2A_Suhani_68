#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Triangle is Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles\n");
        }
        else {
            printf("Triangle is Scalene\n");
        }

    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

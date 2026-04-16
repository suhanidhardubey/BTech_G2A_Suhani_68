#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if valid triangle (sum of angles = 180)
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        
        if (a == 90 || b == 90 || c == 90) {
            printf("Triangle is Right-angled\n");
        }
        else if (a < 90 && b < 90 && c < 90) {
            printf("Triangle is Acute-angled\n");
        }
        else {
            printf("Triangle is Obtuse-angled\n");
        }

    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}

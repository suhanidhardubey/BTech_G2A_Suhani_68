#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value of a
    *a = *b;     // assign value of b to a
    *b = temp;   // assign temp to b
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Passing addresses of x and y
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

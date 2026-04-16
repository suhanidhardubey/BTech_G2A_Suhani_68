#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, max;

    // Dynamically allocate memory for 20 integers
    arr = (int *)malloc(20 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input 20 integers
    printf("Enter 20 integers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is largest
    max = arr[0];

    // Find the largest number
    for (i = 1; i < 20; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display result
    printf("Largest number = %d\n", max);

    // Free allocated memory
    free(arr);

    return 0;
}

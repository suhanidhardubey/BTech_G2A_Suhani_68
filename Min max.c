#include <stdio.h>

int main() {
    int arr[100], n, i;
    int min, max;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element as min and max
    min = max = arr[0];

    // Find min and max
    for(i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    // Output
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d", max);

    return 0;
}

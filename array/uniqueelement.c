#include <stdio.h>

int main() {
    int n, i, j, count;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print unique elements
    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        count = 0;

        // Check if the current element is unique
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the element appears only once, print it
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

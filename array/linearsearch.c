#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index of the target element
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int size, target;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Call the linearSearch function
    int result = linearSearch(arr, size, target);

    // Output the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

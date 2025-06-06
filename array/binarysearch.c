#include<stdio.h>
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}
int main() {
    int arr[] = {2, 4, 6, 8, 12, 14, 16, 18, 20};
    int n=10;
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, n, key);
    if (result != -1) printf("Element found at index %d\n", result);
    else printf("Element not found\n");
    return 0;
}
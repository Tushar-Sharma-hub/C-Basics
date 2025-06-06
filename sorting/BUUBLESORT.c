#include<stdio.h>
void bubblesort(int arr[], int n) {
    for (int i = 0; i < n ; i++) {
        bool isSwap=false;
        for (int j = 0; j < n-i-1 ; j++) { //use n-i-1 in inner loop to get numbers ahead of the selected number.
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwap = true;
            }
        }
        if(!isSwap){ // array already sorted.
            return;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    printf("After bubble sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


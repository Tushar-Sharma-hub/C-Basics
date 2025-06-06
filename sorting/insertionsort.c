#include<stdio.h>
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>current){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current;
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionsort(arr, n);
    printf("After insertion sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
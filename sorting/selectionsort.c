#include<stdio.h>
void selectionsort(int arr[],int n){

    for(int i=0;i<n;i++){
        int smallestIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
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

    selectionsort(arr, n);
    
    printf("After Selection sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
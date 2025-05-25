#include<stdio.h>
int main(){
    int arr[5];
    printf("enter array elements:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements of array are:");
    for(int j=0;j<=4;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
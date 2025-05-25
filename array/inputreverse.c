#include<stdio.h>
int main(){
    int arr[5];
    printf("enter array elements:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nreverse elements of the array are:");
    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
}

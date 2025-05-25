#include<stdio.h>
int main(){
    int arr[5];
    printf("enter array elements:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<=4;j++){
        sum=sum+arr[j];
    }
    printf("Sum of array is:%D",sum);
}
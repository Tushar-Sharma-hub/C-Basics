#include<stdio.h>
int main(){
    int arr[6]={2,4,5,43,5,4};
    int max=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum among array elements is:%d",max);
}
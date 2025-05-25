#include<stdio.h>
int main(){
    int arr[6]={2,4,5,1,5,4};
    int min=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum among array elements is:%d",min);
}
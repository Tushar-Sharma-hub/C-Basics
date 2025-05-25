#include<stdio.h>
int main(){
    int arr[10]={25,76,56,43,23,29,34,46,90,33};
    int n,count=0;
    printf("enter number to check how many are greater:");
    scanf("%d",&n);
    for(int i=0;i<=9;i++){
        if(arr[i]>n){
            printf("%d\n",arr[i]);
            count++;
    }}
    printf("Total number:%d",count);
}
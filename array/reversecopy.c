#include<stdio.h>//copy an array in reverse.
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int copyarr[10];
    for(int i=0;i<=9;i++){
        copyarr[i]=arr[9-i];
    }
    printf("the new copied array:");
    for(int i=0;i<=9;i++){
        printf("\n%d",copyarr[i]);
    }
    return 0;
}
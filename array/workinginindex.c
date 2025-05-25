#include<stdio.h>
int main(){
    int arr[10]={1,3,5,4,2,5,6,4,5,9};
    for(int i=0;i<=9;i++){
        if(i%2==0){
            arr[i]=arr[i]+10;
        }
        else{
            arr[i]=arr[i]*2;
        }
    }
    printf("the new array elements will be:");
    for(int i=0;i<=9;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}
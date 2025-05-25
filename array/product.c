#include<stdio.h>
int main(){
    int arr[6]={2,4,5,4,5,4};
    int prod=1;
    for(int i=0;i<=5;i++){
        prod=prod*arr[i];
    }
    printf("the product of elements is:%d",prod);
    return 0;
}
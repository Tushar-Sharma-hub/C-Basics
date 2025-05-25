#include<stdio.h>
int main(){
    int arr[10]={25,76,56,43,23,29,34,46,90,33};
    int max=arr[0];
    int secmax=arr[0];
    for(int i=0;i<=9;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]!=max && arr[i]>secmax ){
            secmax=arr[i];
        }
    }
    printf("the second largest number is %d",secmax);
}
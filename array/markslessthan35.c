#include<stdio.h>
int main(){
    int arr[10]={25,76,56,43,23,29,34,46,90,33};
    for(int i=0;i<=9;i++){
        if(arr[i]<35){
            printf("The students with roll no.%d has less than 35 marks\n",i+1);
        }
    }
    return 0;
}
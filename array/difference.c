//difference between sum of odd index number and sum of even index.
#include<stdio.h>
int main(){
    int arr[10]={25,76,56,43,23,29,34,46,90,33};
    int sumeven=0,sumodd=0;
    for(int i=0;i<=9;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
    int diff=sumeven-sumodd;
    printf("the difference between sum of odd index number and even index:%d",diff);
}
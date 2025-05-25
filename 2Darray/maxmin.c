#include<stdio.h>
int main(){
    int arr[3][3]={3,243,43,23,3,434,2,33,4};
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]) max=arr[i][j];
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    printf("the maximum number in array is %d and min is %d",max,min);
    return 0;
}
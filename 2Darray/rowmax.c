#include<stdio.h>
int main(){
    int arr[3][3]={3,243,43,23,3,434,2,33,44};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        printf("The sum of row %d is %d\n",i,sum);
    }
    return 0;
}
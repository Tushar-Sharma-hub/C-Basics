#include<stdio.h>
int main(){
    int arr[2][2]={{2,2},{2,2}};
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of the array is:%d",sum);
    return 0;
}
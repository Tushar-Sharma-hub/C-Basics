#include<stdio.h>
int add(int a[]){
    int sum=0;
    for(int i=0;i<=4;i++){
        sum=sum+a[i];
    }
    return sum;
}
int main(){
    int arr[5]={3,5,3,43,5};
    int ans=add(arr);
    printf("the sum of elements of array is:%d",ans);
    return 0;
}
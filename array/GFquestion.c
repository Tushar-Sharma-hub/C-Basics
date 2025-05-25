//find total number of pairs in the array whose sum is equal to to the given vale of x.
#include<stdio.h>
int main(){
    int arr[10]={25,76,56,43,23,29,34,46,90,33};
    int x,pairs=0;
    printf("enter x:");
    scanf("%d",&x);
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            if(arr[i]+arr[j]==x){
                pairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("Total number of pairs is :%d",pairs);
    return 0;
}
//reverse an array without any extra array.
//we will use swap.
#include<stdio.h>
int reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return arr[n];
}
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array:");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    printf("the reverse array :");
    for(int i=0;i<=n-1;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
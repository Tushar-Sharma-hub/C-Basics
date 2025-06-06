#include<stdio.h>

void countsort(int a[],int n){
    int i,j;
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int temp[max+1];
    for(i=0;i<=max;i++){
        temp[i]=0;
    }
    for(i=0;i<n;i++){
        temp[a[i]]=temp[a[i]]+1;
    }
    i=0,j=0;
    while(i<=max){
        if(temp[i]>0){
            a[j]=i;
            temp[i]=temp[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int n;
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nBefore:\n");
    printarray(arr,n);
    countsort(arr,n);
    printf("\nAfter:\n");
    printarray(arr,n);
}
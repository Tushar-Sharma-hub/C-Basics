#include<stdio.h>
void merge(int A[],int low,int mid,int high){
    int i,j,k,B[high+1];
    i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    while(i<=mid) B[k++]=A[i++];
    while(j<=high) B[k++]=A[j++];
    for(int i=low;i<=high;i++){
        A[i]=B[i];
    }
}
void mergesort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    printf("Enter number of elememts you want to enter:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nEnter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nBefore:\n");
    printarray(a,n);
    mergesort(a,0,n-1);
    printf("\nAfter Merge Sort:\n");
    printarray(a,n);
}
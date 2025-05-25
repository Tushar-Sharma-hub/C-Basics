#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i+1;k++){
            printf("   ");}
        for(int j=1;j<=2*i-1;j++){//by using AP.
            printf(" %d ",a);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");}
        for(int j=1;j<=i;j++){//by using AP.
            printf("%d ",i);
        }
        
        printf("\n");
    }
    return 0;
}
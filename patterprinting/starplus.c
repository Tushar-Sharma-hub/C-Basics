#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==3 || i==3)
                printf("*");
            
            else printf(" ");
        }
        printf("\n");
    }
    return 0 ;
}
#include<stdio.h>
int main(){
    int n,m;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter m:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1 || j==m || i==1 || i==n)
                printf(" * ");
            
            else printf("   ");
        }
        printf("\n");
    }
    return 0 ;
}
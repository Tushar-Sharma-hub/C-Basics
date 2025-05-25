#include<stdio.h>
int main(){
    int n,m;
    printf("enter number of rows:");
    scanf("%d",&n);
    printf("enter number of columns:");
    scanf("%d",&m);
    for (int i=1 ; i <= n ; i++){//outer loop number of lines
        for(int i=1;i<=m;i++){//inner loop no of stars in each line
            printf("*");
        }
        printf("\n");//har line ke baad execute
    }
    return 0 ;
}
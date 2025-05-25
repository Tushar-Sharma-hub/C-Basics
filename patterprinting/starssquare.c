#include<stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    for (int i=1 ; i <= n ; i++){//outer loop number of lines
        for(int i=1;i<=n;i++){//inner loop no of stars in each line
            printf("* ");
        }
        printf("\n");//har line ke baad execute
    }
    return 0 ;
}
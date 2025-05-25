#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
               printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
               printf("*");
        }
        
        printf("\n");
    }
    for(int a=1;a<=n;a++){
        for(int c=1;c<=a;c++){
            printf(" ");}
        for(int b=1;b<=9-2*a;b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
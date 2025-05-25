#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){ //rows
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++){ //columns according to i.
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
    return 0;
}
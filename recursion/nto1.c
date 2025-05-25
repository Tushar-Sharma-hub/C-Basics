#include<stdio.h>
void nto1(int a){
    if(a==0){
        return;
    }
    printf("%d\n",a);
    nto1(a-1);
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    nto1(n);
    return 0;
}
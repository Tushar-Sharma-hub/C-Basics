#include<stdio.h>//n to 1
void dec(int a){
    if(a==0) return ;
    printf("%d\n",a);
    dec(a-1);
    return;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    dec(n);
    return 0;
}
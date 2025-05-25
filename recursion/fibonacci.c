#include<stdio.h>
int fibo(int x){
    if(x<=2) return 1;
    int reans=fibo(x-1)+fibo(x-2);
    return reans;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%dth term of fibonacci series is:%d",n,ans);
}
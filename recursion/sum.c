#include<stdio.h>//sum of 1 to n.
int sum(int n){
    if(n==0 || n==1) return 1;
    int reans=n+sum(n-1);
    return reans;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int lol=sum(n);
    printf("%D",lol);
    return 0;
}
#include<stdio.h>//1 to n using 1 parameter.
void inc(int a){
    if(a==0) return ;//base case
    inc(a-1);//call
    printf("%d\n",a);//after call it won't print unitl base case is false.
    return;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    inc(n);
    return 0;
}
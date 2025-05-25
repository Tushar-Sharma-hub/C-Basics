#include<stdio.h>//1 to n using 1 parameter.
void incdec(int a){
    if(a==0) return ;//base case
    printf("%d\n",a);
    incdec(a-1);//call
    printf("%d\n",a);//after call it won't print unitl base case is false.
    return;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    incdec(n);
    return 0;
}
#include<stdio.h>
int factorial(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main(){
    int fact,n;
    printf("enter n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("the factorial of the number is :%d",fact);
    return 0;
}
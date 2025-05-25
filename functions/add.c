#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){ 
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("sum:%d",sum);
    return 0;
}
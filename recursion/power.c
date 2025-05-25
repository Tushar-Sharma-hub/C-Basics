#include<stdio.h>
int power(int x,int y){
    if(y==0) return 1;
    int reans=x*power(x,y-1);
    return reans;
}
int main(){
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the power of the number:");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("%d to the power of %d is %d",a,b,ans);
    return 0;
}
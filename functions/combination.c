#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    int ans=a/(b*c);
    printf ("combination is:%d",ans);
    return 0; 
}
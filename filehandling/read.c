#include<stdio.h>
int main(){
    FILE *ptr=fopen("tushar.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL){//to read specific chahracter we can change 100.
        printf("%s",str);
    }
    fclose(ptr);
}
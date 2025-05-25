#include<stdio.h>
int main(){
    FILE *ptr=fopen("PC.txt","w");
    char str[]="Placement lgegi";
    fputs(str,ptr);
    fclose(ptr);
}
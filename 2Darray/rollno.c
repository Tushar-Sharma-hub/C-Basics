//Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include<stdio.h>
int main(){
    int students[4][2];
    printf("enter roll no. and marks of the student:");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&students[i][j]);
        }
    }
    printf("So the array becomes:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf(" %d ",students[i][j]);
        }
        printf("\n");
    }
    return 0;
}
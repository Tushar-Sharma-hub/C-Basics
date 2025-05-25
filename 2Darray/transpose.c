#include<stdio.h>
int main(){
    int arr1[2][3];
    printf("enter elements of matris:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf(" %d ",&arr1[i][j]);
        }
    }
    printf("the matrix after transpose:\n");
    for(int i=0;i<3;i++){         //notice change in row and column number.
        for(int j=0;j<2;j++){
            printf(" %d ",arr1[j][i]);   // change in calling matrix.
        }
        printf("\n");
    }
    return 0;
}
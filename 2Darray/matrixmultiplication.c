#include<stdio.h>
int main(){
    int a[3][2]={1,2,3,4,5,6};
    int b[2][4]={1,2,3,4,5,6,7,8};
    int res[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            res[i][j]=0;
            for(int k=0;k<2;k++){ //Conditon for multiplication is row and colm should be equal , here it is 2 so we used 2.
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

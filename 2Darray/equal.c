#include <stdio.h>
int main() {
    int matrix1[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int matrix2[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3, cols = 3; 
    int isEqual = 1; 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                isEqual = 0; 
                break;
            }
        }
        if (isEqual == 0) {
            break;
        }
    }
    if (isEqual==1) {
        printf("The two matrices are equal.\n");
    } else {
        printf("The two matrices are not equal.\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3, cols = 3;
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > j) {
                printf("0 ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
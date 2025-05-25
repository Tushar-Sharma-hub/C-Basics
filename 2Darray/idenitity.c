#include <stdio.h>
int main() {
    int matrix[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int n = 3, isIdentity = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = 0;
                break;
            }
        }
        if (isIdentity==0) break;
    }
    if (isIdentity==1)
        printf("The given matrix is an identity matrix.\n");
    else
        printf("The given matrix is not an identity matrix.\n");
    return 0;
}
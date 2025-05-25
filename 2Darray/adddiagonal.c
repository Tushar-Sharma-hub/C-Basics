#include <stdio.h>

int main() {
    // Predefined 3x3 matrix
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    int n = 3; // Size of the matrix (3x3)
    int principalSum = 0, secondarySum = 0;

    // Calculate the sums of the diagonals
    for (int i = 0; i < n; i++) {
        principalSum += matrix[i][i];           // Principal diagonal (i == j)
        secondarySum += matrix[i][n - 1 - i];  // Secondary diagonal (i + j = n - 1)
    }

    // Add both sums
    int totalSum = principalSum + secondarySum;

    // If the matrix has an overlapping center element (in odd-sized matrices)
    if (n % 2 == 1) {
        totalSum -= matrix[n / 2][n / 2]; // Avoid double counting the center element
    }

    printf("Principal diagonal sum = %d\n", principalSum);
    printf("Secondary diagonal sum = %d\n", secondarySum);
    printf("Total sum of both diagonals = %d\n", totalSum);

    return 0;
}
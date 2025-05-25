#include <stdio.h>

int main() {
    int i, j, spaces, stars = 6;

    // Outer loop for rows (starts with 6 stars)
    for (i = 0; i < 4; i++) {
        // Print leading spaces
        for (spaces = 0; spaces < i; spaces++) {
            printf("  ");  // Two spaces for alignment
        }

        // Print stars in decreasing order (6, 4, 2, and finally 1 star)
        for (j = 0; j < stars - 2 * i; j++) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}







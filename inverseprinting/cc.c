#include <stdio.h>

int main() {
    int i, j;

    // Start with 6 stars, then reduce by 2 each row
    for (i = 6; i >= 1; i -= 2) {
        // Print leading spaces
        for (j = 0; j < (6 - i) / 2; ++j) {
            printf("  ");  // Print two spaces to align stars
        }
        // Print stars
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
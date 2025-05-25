#include <stdio.h>

// Function to calculate the Fibonacci number using recursion
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: Fibonacci(0) = 0
    } else if (n == 1) {
        return 1; // Base case: Fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive relation
    }
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

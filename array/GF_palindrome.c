//palindrome is number which is same in reverse also.
#include <stdio.h>

void isPalindrome(int arr[]) {
    int i = 0;
    int j = 5;
    int is_palindrome = 1;  // Assume it's a palindrome initially

    while (i < j) {
        if (arr[i] != arr[j]) {
            is_palindrome = 0;  // Set to 0 if any mismatch is found
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome==1) {
        printf("It is a palindrome.\n");
    } else {
        printf("No, it is not a palindrome.\n");
    }
}

int main() {
    int arr[6] = {1, 2, 3, 3, 2, 1};
    isPalindrome(arr);  // Pass the size of the array
    return 0;
}

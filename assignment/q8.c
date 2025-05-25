#include <stdio.h>
void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    length--;
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i];
        str[length - i] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
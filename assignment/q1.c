#include <stdio.h>
int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ') {
            specialChars++;
        }
    }
    printf("Alphabets: %d\nDigits: %d\nSpecial Characters: %d\n", alphabets, digits, specialChars);
    return 0;
}
#include <stdio.h>
void replaceVowels(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A ' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = '@';
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    replaceVowels(str);
    printf("String after replacing vowels: %s\n", str);
    return 0;
}
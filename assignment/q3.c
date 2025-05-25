#include <stdio.h>
int main() {
    char str[100];
    int count[256] = {0};
    int maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = i;
        }
    }
    printf("Maximum occurring character: '%c' occurred %d times\n", maxChar, maxCount);
    return 0;
}
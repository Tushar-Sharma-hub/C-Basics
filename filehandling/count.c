//count character and lines and words.
#include<stdio.h>
int main() {
    int count = 0, line = 0;
    int words=0;
    char ch;
    FILE *file = fopen("tushar.txt", "r");
    if(file == NULL) {
        printf("Unable to open the file.");
        return 1; 
    }
    while(ch != EOF) {
        ch = fgetc(file);
        count++; 
        if(ch == '\n') line++;
        else if(ch == ' ' || ch == '\n') words++;
    }
    fclose(file); // Close the file
    printf("Number of characters and lines and words are %d, %d , %d \n", count, line,words);
    return 0;
}
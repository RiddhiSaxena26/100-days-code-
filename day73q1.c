#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char buffer[1000];
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        lineCount++;  // each fgets() call = one line

        for (int i = 0; buffer[i] != '\0'; i++) {
            char ch = buffer[i];
            charCount++;

            if (!isspace(ch)) {
                if (inWord == 0) {
                    wordCount++;
                    inWord = 1;
                }
            } else {
                inWord = 0;
            }
        }
    }

    fclose(fp);

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}
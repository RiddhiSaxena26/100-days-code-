#include <stdio.h>

int main() {
    FILE *fp;
    char newLine[200];

    // Open file in append mode
    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take new line input from user
    printf("Enter a new line of text: ");
    getchar(); // consume leftover newline from previous input
    fgets(newLine, sizeof(newLine), stdin);

    // Append to file
    fprintf(fp, "%s", newLine);

    // Close file
    fclose(fp);

    printf("Text successfully appended to info.txt\n");

    return 0;
}
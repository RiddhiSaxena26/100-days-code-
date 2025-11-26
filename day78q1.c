#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int vowelCount = 0, consonantCount = 0;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    // Read characters until EOF
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // normalize case

        if (isalpha(ch)) {  // only letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }
    }

    fclose(fp);

    printf("Total vowels: %d\n", vowelCount);
    printf("Total consonants: %d\n", consonantCount);

    return 0;
}
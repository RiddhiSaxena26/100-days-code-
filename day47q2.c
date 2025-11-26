#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200];
    int maxLen = 0, currentLen = 0;
    char current[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            currentLen = strlen(current);
            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(longest, current);
            }
            j = 0; // reset for next word
        }
    }
    
    // check last word
    current[j] = '\0';
    currentLen = strlen(current);
    if (currentLen > maxLen) {
        maxLen = currentLen;
        strcpy(longest, current);
    }
    
    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    
    return 0;
}
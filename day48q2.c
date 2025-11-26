#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    char *wordStart = NULL;
    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (wordStart == NULL) {
                wordStart = &str[i];  // mark start of word
            }
        } else {
            if (wordStart != NULL) {
                reverseWord(wordStart, &str[i - 1]);  // reverse current word
                wordStart = NULL;
            }
        }
    }
    
    printf("Reversed words: %s\n", str);
    
    return 0;
}
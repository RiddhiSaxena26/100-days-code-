#include <stdio.h>
#include <string.h>

int main() {
    char str[200], ch;
    int count = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    
    printf("Frequency of '%c' = %d\n", ch, count);
    
    return 0;
}
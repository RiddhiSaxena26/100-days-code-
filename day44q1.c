#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= 'a' && str[i] <= 'z')) {
            // ignore alphabets
        } else {
            special++;
        }
    }
    
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    
    return 0;
}
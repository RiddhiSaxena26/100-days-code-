#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int j = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // check if character is NOT a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
    }
    result[j] = '\0';  // terminate the new string
    
    printf("String without vowels: %s\n", result);
    
    return 0;
}
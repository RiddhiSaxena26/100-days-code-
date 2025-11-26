#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    // replace spaces with hyphens
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
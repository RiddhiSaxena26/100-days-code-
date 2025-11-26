#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    
    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    printf("Initials: ");
    
    // print first character if it's alphabet
    if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z')) {
        printf("%c", str[0]);
    }
    
    // print character after every space
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && 
           ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            printf("%c", str[i]);
        }
    }
    
    printf("\n");
    return 0;
}
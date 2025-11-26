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
    
    printf("Formatted name: ");
    
    // print first character as initial
    if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z')) {
        printf("%c", str[0]);
    }
    
    // track last word (surname)
    char surname[100];
    int j = 0;
    
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && 
           ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            // if not the last word, print initial
            if (strchr(&str[i], ' ') != NULL) {
                printf("%c", str[i]);
            } else {
                // last word → surname
                strcpy(surname, &str[i]);
                break;
            }
        }
    }
    
    printf(" %s\n", surname);
    return 0;
}
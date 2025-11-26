#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    // check palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");
    
    return 0;
}
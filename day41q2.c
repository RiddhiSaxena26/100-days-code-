#include <stdio.h>

int main() {
    char str[100];   // buffer for input

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string including spaces

    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {   // skip newline from fgets
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
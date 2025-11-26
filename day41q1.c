#include <stdio.h>

int main() {
    char str[100];   // buffer for input
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input, allows spaces

    // Count characters manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {   // skip newline from fgets
            count++;
        }
    }

    printf("Total number of characters = %d\n", count);

    return 0;
}
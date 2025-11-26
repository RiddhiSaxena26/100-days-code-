#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    // Capitalize first character if it's a letter
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("\nAll substrings:\n");

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            printf("%.*s\n", j, str + i);
        }
    }

    return 0;
}

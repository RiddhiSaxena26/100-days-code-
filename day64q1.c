#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // ASCII character map
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        // If character already seen, move start
        if (lastIndex[(unsigned char)s[end]] >= start) {
            start = lastIndex[(unsigned char)s[end]] + 1;
        }

        lastIndex[(unsigned char)s[end]] = end;

        int windowLen = end - start + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
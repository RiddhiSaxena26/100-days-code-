#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};  // frequency array for all ASCII characters
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // remove newline if present
    size_t len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    size_t len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';
    
    // if lengths differ, not an anagram
    if (strlen(str1) != strlen(str2)) {
        printf("Not an anagram.\n");
        return 0;
    }
    
    // count frequency of characters in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    
    // subtract frequency using str2
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    
    // check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not an anagram.\n");
            return 0;
        }
    }
    
    printf("The strings are anagrams!\n");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[26] = {0};  // frequency array for lowercase letters
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input including spaces
    
    // remove newline if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    char firstRepeat = '\0';
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            
            if (freq[index] == 2) {  // found repeating
                firstRepeat = str[i];
                break;
            }
        }
    }
    
    if (firstRepeat != '\0')
        printf("First repeating lowercase alphabet: %c\n", firstRepeat);
    else
        printf("No repeating lowercase alphabet found.\n");
    
    return 0;
}
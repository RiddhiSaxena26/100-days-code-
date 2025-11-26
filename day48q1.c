#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // lengths must be equal
    if (len1 != len2) return 0;
    
    // create a new string str1+str1
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    // check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // remove newline if present
    size_t len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    size_t len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';
    
    if (isRotation(str1, str2))
        printf("Yes, \"%s\" is a rotation of \"%s\".\n", str2, str1);
    else
        printf("No, \"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    
    return 0;
}
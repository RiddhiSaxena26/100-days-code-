#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%s", date);
    
    // Extract parts using sscanf
    sscanf(date, "%2s/%2s/%4s", day, month, year);
    
    // Replace month "04" with "Apr"
    if (strcmp(month, "04") == 0) {
        strcpy(month, "Apr");
    }
    
    printf("Formatted date: %s-%s-%s\n", day, month, year);
    
    return 0;
}
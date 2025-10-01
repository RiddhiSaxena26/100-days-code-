#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (int num = 6 - i; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
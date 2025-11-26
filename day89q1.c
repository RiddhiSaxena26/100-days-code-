#include <stdio.h>

// Define enum with explicit values
enum Example { A = 1, B = 5, C = 10, D }; 
// Note: D will automatically be 11 (since it follows C=10)

int main() {
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
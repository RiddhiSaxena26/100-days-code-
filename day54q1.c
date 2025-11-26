#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Check if totalSum is a perfect square
    int x = (int)sqrt(totalSum);

    if (x * x == totalSum) {
        printf("Pivot Integer: %d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
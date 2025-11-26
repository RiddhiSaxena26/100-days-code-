#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];  // array of size n (but missing one number between 0..n)
    printf("Enter %d integers between 0 and %d (one missing):\n", n, n);
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    printf("Missing number: %d\n", missing);

    return 0;
}
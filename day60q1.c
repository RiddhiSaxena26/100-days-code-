#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    printf("Maximum elements of each subarray of size %d: ", k);
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        printf("%d", max);
        if (i != n - k) {
            printf(" ");  // space separated
        }
    }
    printf("\n");

    return 0;
}
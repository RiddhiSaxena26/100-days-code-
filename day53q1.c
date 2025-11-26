#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            pivotIndex = i;
            break;  // leftmost pivot index found
        }
        leftSum += arr[i];
    }

    printf("Pivot Index: %d\n", pivotIndex);
    return 0;
}
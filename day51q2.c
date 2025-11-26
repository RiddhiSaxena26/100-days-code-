#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil found
            high = mid - 1;    // look for smaller index
        } else {
            low = mid + 1;     // move right
        }
    }

    printf("Ceil Index: %d\n", result);
    return 0;
}
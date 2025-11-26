#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Boyer-Moore Majority Vote Algorithm
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify candidate
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        printf("Majority Element: %d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
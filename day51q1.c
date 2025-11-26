#include <stdio.h>

// Function to find first occurrence using binary search
int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;   // move left for first occurrence
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

// Function to find last occurrence using binary search
int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;    // move right for last occurrence
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements of sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last  = lastOccurrence(nums, n, target);

    printf("\nFirst Occurrence Index: %d\n", first);
    printf("Last Occurrence Index: %d\n", last);

    return 0;
}


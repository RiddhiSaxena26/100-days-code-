#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 20, 5, 40, 30};
    int n = 5;
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest: %d\n", second);

    return 0;
}
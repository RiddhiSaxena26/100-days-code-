#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (with one repeated):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Boolean array to mark visited elements
    int visited[n+1];  // assuming elements are in range 0..n
    for (int i = 0; i <= n; i++) {
        visited[i] = 0;
    }

    int duplicate = -1;
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            duplicate = arr[i];
            break;  // found duplicate in one iteration
        } else {
            visited[arr[i]] = 1;
        }
    }

    if (duplicate != -1)
        printf("Repeated element: %d\n", duplicate);
    else
        printf("No duplicate found\n");

    return 0;
}
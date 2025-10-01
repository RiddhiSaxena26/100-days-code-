#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n; 
    if (k == 0){ 
        return;
    }

    reverse(arr, 0, n - 1);      
    reverse(arr, 0, k - 1);      
    reverse(arr, k, n - 1);    
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int k = 2;

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
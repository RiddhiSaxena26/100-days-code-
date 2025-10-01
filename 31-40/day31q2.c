#include <stdio.h>

int main() {
    int n  ;
    int arr[n] ;
    printf("enter number of elements : ");
    scanf("%d",&n);
    for(int i= 0 ; i<n ; i++){
        printf("enter element %d of array ",i+1);
        scanf("%d",&arr[i]);
    }
    

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

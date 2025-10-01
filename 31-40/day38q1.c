#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int A[rows][cols], B[rows][cols], sum[rows][cols];

    // Input elements of first matrix
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    // Input elements of second matrix
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    // Add matrices
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            sum[i][j] = A[i][j] + B[i][j];

    // Output result
    printf("\nSum of matrices (A + B):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}
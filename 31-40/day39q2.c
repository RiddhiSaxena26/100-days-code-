#include <stdio.h>

int sumMainDiagonal(int matrix[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int mat[3][100] = {
        {2, 3, 1},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Sum = %d\n", sumMainDiagonal(mat, 3)); // Output: 16
    return 0;
}
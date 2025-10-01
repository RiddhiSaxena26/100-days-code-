#include <stdio.h>

int areDiagonalElementsDistinct(int matrix[][100], int n) {
    int seen[1000] = {0};
    for (int i = 0; i < n; i++) {
        int val = matrix[i][i];
        if (seen[val])
            return 0;
        seen[val] = 1;
    }
    return 1;
}

int main() {
    int mat[3][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("%s\n", areDiagonalElementsDistinct(mat, 3) ? "True" : "False");
    return 0;
}
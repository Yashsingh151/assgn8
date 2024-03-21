#include <stdio.h>

int main() {
    int rows, cols, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the number of right rotations: ");
    scanf("%d", &n);

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            int temp = *(*(matrix + i) + cols - 1);
            for (int k = cols - 1; k > 0; k--) {
                *(*(matrix + i) + k) = *(*(matrix + i) + k - 1);
            }
            *(*(matrix + i)) = temp;
        }
    }

    printf("\nMatrix after %d right rotations:\n", n);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

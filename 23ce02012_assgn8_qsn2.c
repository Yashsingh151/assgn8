#include<stdio.h>

int main() {
    int row1, col1, row2, col2;

    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d", &row1);
    scanf("%d", &col1);
    
    int matrix1[row1][col1];

    printf("Enter the elements of the first matrix: ");
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d", &row2);
    scanf("%d", &col2);
    
    int matrix2[row2][col2];

    printf("Enter the elements of the second matrix: ");
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    int result[row1][col2];
    
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            int sum =0; 
            for(int k =0; k<col1; k++) {
                sum += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
            result[i][j] = sum;
        }
    }

    printf("Resulting matrix: \n");
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;

}

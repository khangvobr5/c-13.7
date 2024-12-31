#include <stdio.h>
#define MAX 50 

void taoMaTran(int matrix[MAX][MAX], int rows, int cols) {
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void inMaTran(int matrix[MAX][MAX], int rows, int cols) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX][MAX];
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &rows, &cols);
    taoMaTran(matrix, rows, cols);
    inMaTran(matrix, rows, cols);

    return 0;
}


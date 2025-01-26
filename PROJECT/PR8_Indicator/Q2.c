#include<stdio.h>

void cubeArray(int *arr, int row, int col) {
    printf("Cubed values of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int *ptr = arr + i * col + j;
            *ptr = (*ptr) * (*ptr) * (*ptr);
            printf("%d ", *ptr);
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &col);
    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    cubeArray((int *)arr, row, col);
}
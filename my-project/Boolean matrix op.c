// Boolean matrix operation

#include <stdio.h>

#define SIZE 3

void getMatrix(int matrix[SIZE][SIZE], char name) {

    printf("Enter elements (only 0 or 1) for Matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            while (matrix[i][j] != 0 && matrix[i][j] != 1) {

                printf("Oops! Only enter 0 or 1: ");
                scanf("%d", &matrix[i][j]);
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE], const char *title) {

    printf("\n%s\n", title);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void booleanMeet(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] && B[i][j];
}

void booleanJoin(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] || B[i][j];
}







void booleanProduct(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] = result[i][j] || (A[i][k] && B[k][j]);
            }
        }
    }
}

int main() {

    printf("Name: Siddhant Shrestha Roll No: 40\n");

    int A[SIZE][SIZE], B[SIZE][SIZE];
    int meet[SIZE][SIZE], join[SIZE][SIZE], product[SIZE][SIZE];

    getMatrix(A, 'A');
    getMatrix(B, 'B');

    booleanMeet(A, B, meet);
    booleanJoin(A, B, join);
    booleanProduct(A, B, product);

    printMatrix(A, "Matrix A:");
    printMatrix(B, "Matrix B:");

    printMatrix(meet, "Boolean MEET (AND of A and B):");
    printMatrix(join, "Boolean JOIN (OR of A and B):");
    printMatrix(product, "Boolean PRODUCT (A x B):");

    return 0;
}


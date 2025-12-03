// Computes transitive closure

#include <stdio.h>
#define MAX 10
// Function to compute transitive closure using Warshall's algorithm
void computeTransitiveClosure(int R[MAX][MAX], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (R[i][k] && R[k][j])  // If there's a path from i to k, and k to j
                    R[i][j] = 1;         // Update the matrix
            }
        }
    }
}
// Function to display a matrix
void displayMatrix(int R[MAX][MAX], int n, const char* title) {
    printf("%s\n", title);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    int R[MAX][MAX], original[MAX][MAX];
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    printf("Enter the relation matrix (size %d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("R[%d][%d]: ", i, j);
            scanf("%d", &R[i][j]);
            original[i][j] = R[i][j];  // Copy original relation
        }
    }
    displayMatrix(original, n, "\nOriginal Relation Matrix:");
    computeTransitiveClosure(R, n);
    displayMatrix(R, n, "\nTransitive Closure Matrix:");
    return 0;
}



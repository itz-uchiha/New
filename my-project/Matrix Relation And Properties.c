// Represents relations in matrix and check properties

#include <stdio.h>
#include <stdbool.h>

#define MAX 10

// Check reflexivity
bool isReflexive(int R[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        if (R[i][i] != 1)
            return false;
    }    return true;
}

// Check symmetry
bool isSymmetric(int R[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (R[i][j] != R[j][i])
                return false;
        }    
}
  return true;
}

// Check transitivity
bool isTransitive(int R[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (R[i][j]) {
                for (int k = 0; k < n; k++) {
                    if (R[j][k] && !R[i][k])
                        return false;
                }           
 }      
 }  
 }  
  return true;
}

int main() {
    int n;
    int R[MAX][MAX];

	printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter the number of elements in set A (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the relation matrix (size %d x %d):\n", n, n);
    printf("Enter 1 if (i,j) is in the relation, else 0.\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("R[%d][%d]: ", i, j);
            scanf("%d", &R[i][j]);
        }  
  }

    printf("\nRelation Properties:\n");
    printf("Reflexive: %s\n", isReflexive(R, n) ? "Yes" : "No");
    printf("Symmetric: %s\n", isSymmetric(R, n) ? "Yes" : "No");
    printf("Transitive: %s\n", isTransitive(R, n) ? "Yes" : "No");

    return 0;
}


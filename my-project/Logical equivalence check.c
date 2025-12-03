// Checking equivalence of two logical expression 

#include <stdio.h>

int main() {
    int p, q, r;
    int expr1, expr2;

    int areEquivalent = 1; 

    printf("p\tq\tr\tExpr1 (!p || q)\tExpr2 (!(p && !q))\n");

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                expr1 = (!p) || q;        
                expr2 = !(p && !q);       
                printf("%d\t%d\t%d\t    %d\t\t    %d\n", p, q, r, expr1, expr2);

                if (expr1 != expr2) {
                    areEquivalent = 0;
                }
            }
        }
    }

    if (areEquivalent) {
        printf("\nThe two expressions are logically equivalent.\n");
    } 

    else {
        printf("\n The expressions are NOT logically equivalent.\n");
    }

    return 0;
}


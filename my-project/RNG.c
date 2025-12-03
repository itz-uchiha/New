//  Generate psuedorandom numbers

#include <stdio.h> 
int main() {

int m = 9; // modulus int a = 7; // multiplier int c = 4; // increment int x = 3;  // seed
int n = 10;  // number of pseudorandom numbers to generate


printf("Linear Congruential Generator sequence:\n"); printf("x[0] = %d\n", x);

for (int i = 1; i <= n; i++) { x = (a * x + c) % m;
printf("x[%d] = %d\n", i, x);
}
return 0;
}

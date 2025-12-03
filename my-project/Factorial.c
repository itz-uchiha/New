// Factorial computing algorithm

#include <stdio.h> 
int factorial(int n) {
if (n == 0 || n == 1) return 1; // Base case
else
return n * factorial(n - 1); // Recursive step
}

int main() { int num;
printf("Enter a positive integer: "); scanf("%d", &num);

printf("Factorial of %d is %d\n", num, factorial(num)); return 0;
}


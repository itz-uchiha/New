// Fibonacci series computing algorithm

 #include <stdio.h> 
 int  fibonacci(int n) {
if (n == 0)
return 0; // Base case else if (n == 1)
return 1; // Base case else
return  fibonacci(n - 1) +  fibonacci(n - 2); // Recursive step
}

int main() { int terms, i;
printf("Enter the number of terms in Fibonacci series: "); scanf("%d", &terms);

printf("Fibonacci series:\n"); for (i = 0; i < terms; i++) {
printf("%d ",  fibonacci(i));
}
printf("\n"); return 0;
}

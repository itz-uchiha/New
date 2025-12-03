// Integer Addition

#include <stdio.h>
void add(int a, int b) {
    int n = 5;  
    int c = 0;  
    int sum[n + 1];  
    for (int i = 0; i < n; i++) {
        int ai = (a >> i) & 1;
        int bi = (b >> i) & 1;
        int d = (ai + bi + c) / 2;         
        sum[i] = ai + bi + c - 2 * d;      
        c = d;                             
    }
    sum[n] = c;  
    printf("Binary Sum: ");
    for (int i = n; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");

    printf("Final Sum in Decimal: %d\n", a + b);
}
int main() {
    int a = 5, b = 10;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    add(a, b);
    return 0;
}


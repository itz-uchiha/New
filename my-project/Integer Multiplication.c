// Integer Multiplication

#include <stdio.h>
void multiply(int a, int b) {
    int n = 5;              
    int partialProducts[n];  
    int product = 0;        
    for (int j = 0; j < n; j++) {
        if ((b >> j) & 1) {        
            partialProducts[j] = a << j;  
        } else {
            partialProducts[j] = 0;        
        }
    }
    for (int j = 0; j < n; j++) {
        product += partialProducts[j];
    }
    printf("Partial Products:\n");
    for (int j = 0; j < n; j++) {
        printf("c[%d] = %d\n", j, partialProducts[j]);
    }

    printf("Final Product: %d\n", product);
}

int main() {
    int a = 5, b = 10;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    multiply(a, b);
    return 0;
} 


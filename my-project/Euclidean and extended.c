// Euclidean algorithm

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
	printf("Name: Siddhant Shrestha Roll No: 40\n");
    int a = 4620, b = 101;
    int result = gcd(a, b);
    printf("GCD(%d, %d) = %d\n", a, b, result);
    return 0;
}


// Extended Euclidean Algorithm

#include <stdio.h>
void extendedEuclid(int a, int b, int* gcd, int* x, int* y) {
    int x0 = 1, y0 = 0; 
    int x1 = 0, y1 = 1; 
    int temp, q;
    while (b != 0) {
        q = a / b;
        int r = a % b;
        a = b;
        b = r;
        temp = x1;
        x1 = x0 - q * x1;
        x0 = temp;
        temp = y1;
        y1 = y0 - q * y1;
        y0 = temp;
    }
    *gcd = a;
    *x = x0;
    *y = y0;
}
int main() {
    int a, b, gcd, x, y;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    extendedEuclid(a, b, &gcd, &x, &y);
    printf("GCD(%d, %d) = %d\n", a, b, gcd);
    printf("Coefficients: x = %d, y = %d\n", x, y);
    printf("Check: %d*%d + %d*%d = %d\n", a, x, b, y, a * x + b * y);
    return 0;
}


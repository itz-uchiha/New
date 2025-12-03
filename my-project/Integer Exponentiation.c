// Integer exponentiation

#include <stdio.h>

int bitLength(int n) {
    int length = 0;
    while (n > 0) {
	n = n>>1;
        	length++;
 }
    return length;
}

int modularExponentiation(int b, int n, int m) {
    int x = 1;
    int power = b % m;
    int k = bitLength(n);

    for (int i = 0; i < k; i++) {
        int ai = (n >> i) & 1;
        if (ai == 1) {
            x = (x * power) % m;
        }
        power = (power * power) % m;
    }

    return x;
}

int main () {
    int base, exponent, modulus;
	printf("Name: Siddhant Shrestha Roll no: 40\n\n");
    printf("Enter base: ");
    scanf("%d", &base);
	printf("Enter positive exponent: ");
	scanf("%d", &exponent);
	printf("Enter modulus: ");
	scanf("%d", &modulus);
    int result = modularExponentiation(base, exponent, modulus);

    printf("%d^%d mod %d = %d\n", base, exponent, modulus, result);

    return 0;
}


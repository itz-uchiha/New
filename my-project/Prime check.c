// Prime check

#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}


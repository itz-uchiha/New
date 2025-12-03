// Implementing set operation

#include <stdlib.h>
#include <stdio.h>	// Set Operations
int main ()	//  Union, Intersection Differnce , Complement
{ int i,j;
printf("Set Operations !\n");
char setmap[]={"abcdefghijklmnopqrstuvwxtz"};
int setu[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int seta[] = {0,1,1,1,1,0,1,1,0,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0};
int setb[] = {1,1,0,1,1,0,1,1,0,0,1,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0};
int setun[26]={0}; int setin[26]={0}; int setdif[26]={0};
printf("Union of A and B is :\n");
for( i =0;i<26; i++)
{ if(seta[i]||setb[i]==1) //union of A and B (setun[i]=1);
if(seta[i]&&setb[i]==1) //intersection of A and B (setin[i]=1);
setdif[i] = seta[i] && !setb[i];
}
printf(" Union of Set A and B is =>:{ ");
for(i=0;i<26;i++)
if(setun[i]==1)
printf("%c, ", setmap[i]);
printf(" }");
printf("\n\nIntersection of A and B is :\n");
printf(" Intersection of Set A and B is =>:{ ");
for(i=0;i<26;i++) if(setin[i]==1)
printf("%c, ", setmap[i]);
printf(" }");
printf("\n\nComplement of A :\n");
printf(" Complement of Set A is =>:{ ");
for(i=0;i<26;i++) if(seta[i]!=1)
printf("%c, ", setmap[i]);
printf(" }");
printf("\n\nComplement of B :\n");
printf(" Complement of Set B is =>:{ ");
for(i=0;i<26;i++) if(setb[i]!=1)
printf("%c, ", setmap[i]);
printf(" }");
printf("\n\nDifference of A and B (A-B) is :\n");
printf(" Difference of A and B (A-B) is =>:{ ");
for(i=0;i<26;i++) if(setdif[i]==1)
printf("%c, ", setmap[i]);
printf(" }");
return 0;
}


// Implementing Cartesian Product

#include <stdio.h> 
#include <stdlib.h>

int main()
{
int i, j,k;
int set1[] = {1, 2, 3};
int set2[] = {4, 5}; char set3[] = {'a', 'b'};
int size1 = sizeof(set1) / sizeof(set1[0]); int size2 = sizeof(set2) / sizeof(set2[0]); int size3 = sizeof(set3) / sizeof(set3[0]);

printf("Cartesian Product:\n"); for (i = 0; i < size1; i++)
{
for (j = 0; j < size2; j++)
{ for(k=0;k<size3;k++)
printf("(%d, %d, %c)\n", set1[i], set2[j], set3[k]);
}
}


return 0;
}


// Implementing Fuzzy set operation

#include<stdio.h> 
#include <math.h> 
#define SIZE 4

int main()
{


int i,j;
printf("##The Fuzzy Set Operations##\n"); 
char elements[SIZE]	= {'A','B','C', 'D'};
float A[SIZE]  = {.25,.40, .90,.77};
float B[SIZE]  = {.23,.45, .95,.87};
float intersection[SIZE]; float union_set[SIZE]; float complement[SIZE]; float normalized[SIZE]; float concentration[SIZE]; float dilation[SIZE];
float max_value = A[0];


for(i=1;i<SIZE;i++){
if(A[i]>max_value) max_value = A[i];
}


for (i=0;i<SIZE;i++){
union_set[i]=(A[i]>B[i])?A[i]:B[i];
 
intersection[i]=(A[i]<B[i])?A[i]:B[i]; 
complement[i]=1-A[i]; 
normalized[i]=A[i]/max_value; 
concentration[i]=A[i]*A[i]; 
dilation[i]=sqrt(A[i]);
}


printf("The first fuzzy set A: \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],A[i]);
}


printf("The first fuzzy set B: \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],B[i]);
}


printf("Union \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],union_set[i]);
}


printf("Intersection \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],intersection[i]);
}

printf("Complement \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],complement[i]);
}

printf("Normalization \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],normalized[i]);
}

printf("Concentration \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],concentration[i]);
}

printf("Dilation \n"); for(i=0;i<SIZE;i++){
printf("%c: %.2f\n",elements[i],dilation[i]);
}

return 0 ;
}


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


// Encryption and Decryption

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char encrypt(char ch, int key) {
    if (ch >= 'a' && ch <= 'z') {
        return ((ch - 'a' + key) % 26) + 'a';
    }
    return ch;
}

char decrypt(char ch, int key) {
    if (ch >= 'a' && ch <= 'z') {
        return ((ch - 'a' - key + 26) % 26) + 'a';
    }
    return ch;
}

int main() {
    char message[100];
    int key;

    printf("Enter a sentence (lowercase letters only): ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline

    printf("Enter key (number to shift): ");
    scanf("%d", &key);

    // Encrypt
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = encrypt(message[i], key);
    }
    printf("Encrypted: %s\n", message);

    // Decrypt
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = decrypt(message[i], key);
    }
    printf("Decrypted: %s\n", message);

    return 0;
}


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


// Boolean matrix operation

#include <stdio.h>

#define SIZE 3

void getMatrix(int matrix[SIZE][SIZE], char name) {

    printf("Enter elements (only 0 or 1) for Matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            while (matrix[i][j] != 0 && matrix[i][j] != 1) {

                printf("Oops! Only enter 0 or 1: ");
                scanf("%d", &matrix[i][j]);
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE], const char *title) {

    printf("\n%s\n", title);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void booleanMeet(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] && B[i][j];
}

void booleanJoin(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] || B[i][j];
}







void booleanProduct(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] = result[i][j] || (A[i][k] && B[k][j]);
            }
        }
    }
}

int main() {

    printf("Name: Siddhant Shrestha Roll No: 40\n");

    int A[SIZE][SIZE], B[SIZE][SIZE];
    int meet[SIZE][SIZE], join[SIZE][SIZE], product[SIZE][SIZE];

    getMatrix(A, 'A');
    getMatrix(B, 'B');

    booleanMeet(A, B, meet);
    booleanJoin(A, B, join);
    booleanProduct(A, B, product);

    printMatrix(A, "Matrix A:");
    printMatrix(B, "Matrix B:");

    printMatrix(meet, "Boolean MEET (AND of A and B):");
    printMatrix(join, "Boolean JOIN (OR of A and B):");
    printMatrix(product, "Boolean PRODUCT (A x B):");

    return 0;
}


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
    
    
// TOH

#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) { if (n == 1) {
printf("Move disk 1 from %c to %c\n", source, destination); return;
}
towerOfHanoi(n - 1, source, destination, auxiliary); printf("Move disk %d from %c to %c\n", n, source, destination); towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() { int n;
printf("Enter number of disks: "); scanf("%d", &n);

printf("Steps to solve Tower of Hanoi:\n"); towerOfHanoi(n, 'A', 'B', 'C');
return 0;
}


// Binary search

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) { if (low > high)
return -1; // Not found

int mid = (low + high) / 2; if (arr[mid] == key)
return mid;
else if (key < arr[mid])
return binarySearch(arr, low, mid - 1, key); else
return binarySearch(arr, mid + 1, high, key);
}

int main() {
int arr[100], n, key, i, result;
printf("Enter number of elements (sorted): "); scanf("%d", &n);

printf("Enter %d sorted elements:\n", n); for (i = 0; i < n; i++)
scanf("%d", &arr[i]);

printf("Enter the element to search: "); scanf("%d", &key);

result = binarySearch(arr, 0, n - 1, key);

if (result == -1)
printf("Element not found.\n"); else
printf("Element found at index %d (0-based index).\n", result); return 0;
}


// Weighted directed graph representation


#include <stdio.h>
#define INF 999999  // Representation of no edge

int main() {
    int n, e;
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];

    // Initialize matrix with INF (no edge)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
        }    }
    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges in format (u v w) where u -> v with weight w:\n");
    for (int i = 0; i < e; i++) {
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w; // Directed edge
    }
    printf("\nAdjacency Matrix (INF = No edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", graph[i][j]);
        }         printf("\n");
    }
    return 0;
}


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


// Computes transitive closure

#include <stdio.h>
#define MAX 10
// Function to compute transitive closure using Warshall's algorithm
void computeTransitiveClosure(int R[MAX][MAX], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (R[i][k] && R[k][j])  // If there's a path from i to k, and k to j
                    R[i][j] = 1;         // Update the matrix
            }
        }
    }
}
// Function to display a matrix
void displayMatrix(int R[MAX][MAX], int n, const char* title) {
    printf("%s\n", title);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    int R[MAX][MAX], original[MAX][MAX];
    printf("Name: Siddhant Shrestha Roll No: 40\n");
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    printf("Enter the relation matrix (size %d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("R[%d][%d]: ", i, j);
            scanf("%d", &R[i][j]);
            original[i][j] = R[i][j];  // Copy original relation
        }
    }
    displayMatrix(original, n, "\nOriginal Relation Matrix:");
    computeTransitiveClosure(R, n);
    displayMatrix(R, n, "\nTransitive Closure Matrix:");
    return 0;
}



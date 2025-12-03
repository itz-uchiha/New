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


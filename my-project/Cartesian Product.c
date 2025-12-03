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

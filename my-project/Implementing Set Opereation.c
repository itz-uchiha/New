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


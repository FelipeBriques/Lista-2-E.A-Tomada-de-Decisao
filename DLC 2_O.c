#include<stdio.h>
#include<math.h>
void main ()
{
 int A,mult;
 printf("A: ");
 scanf("%d",&A);
 mult=A*2;
 if (mult>30)
 {
  printf("O produto de %d x 2 = %d eh > 30", A, mult);
 }
 else 
 {
  printf("O produto de %d x 2 = %d eh <= 30", A, mult);
 }
}
#include<stdio.h>
#include<math.h>
void main ()
{
 int A;
 printf("Numero: ");
 scanf("%d",&A);
 if (A<3)
 {
  printf("O valor %d eh menor q 3", A);
 }
 else if (A==3)
 {
  printf("O valor eh %d", A);
 }
 else
 {
  printf("Numero maior q tres");
 }
}
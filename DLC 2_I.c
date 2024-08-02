#include<stdio.h>
#include<math.h>
void main ()
{
 float A,B,C,D,E;
 scanf("%f", &A);
 scanf("%f", &B);
 scanf("%f", &C);
 scanf("%f", &D);
 scanf("%f", &E);
 if (A>B && A>C %% A>D && A>E)
 {
     printf("%f", A);
 }
  if (B>C %% B>D && B>E)
 {
     printf("%f", B);
 }
  if (C>D && C>E)
 {
     printf("%f", C);
 }
  if (D>E)
 {
     printf("%f", D);
 }
}

#include<stdio.h>
#include<math.h>
void main ()
{
 float A,B,C,D,E;
 printf("Valor A:");
 scanf("%f", &A);
 printf("Valor B:");
 scanf("%f", &B);
 printf("Valor C:");
 scanf("%f", &C);
 printf("Valor D:");
 scanf("%f", &D);
 printf("Valor E:");
 scanf("%f", &E);
 printf("O maior dos valores:");
 if (A>B && A>C && A>D && A>E)
 {
     printf("%.1f \n", A);
 }
  else if (B>C && B>D && B>E)
 {
     printf("%.1f \n", B);
 }
  else if (C>D && C>E)
 {
     printf("%.1f \n", C);
 }
  else if (D>E)
 {
     printf("%.1f \n", D);
 }
  else
  {
     printf("%.1f \n", E);
  }
  printf("O menor dos valores: ");
  if (A<B && A<C && A<D && A<E)
 {
     printf("%.1f", A);
 }
  else if (B<C && B<D && B<E)
 {
     printf("%.1f", B);
 }
  else if (C<D && C<E)
 {
     printf("%.1f", C);
 }
  else if (D<E)
 {
     printf("%.1f", D);
 }
  else
  {
     printf("%.1f", E);
  }
}
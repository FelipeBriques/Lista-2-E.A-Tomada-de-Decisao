#include<stdio.h>
#include<math.h>
void main ()
{
 int A,B,C,soma;
 printf("A: ");
 scanf("%d",&A);
 printf("B: ");
 scanf("%d",&B);
 printf("C: ");
 scanf("%d",&C);
 soma=A+B+C;
 if (soma>=100)
 {
  printf("A soma de A+B+C= %d, soma >= 100", soma);
 }
 else 
 {
  printf("Soma < 100");
 }
}
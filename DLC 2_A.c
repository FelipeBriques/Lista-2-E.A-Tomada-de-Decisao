#include<stdio.h>
void main()
{
  int A, B, C;
  printf("Variavel A: ");
  scanf("%d", &A);
  printf("Variavel B: ");
  scanf("%d", &B);
  if (A==B)
  {
   printf("Inaceitavel");
  }
  else if (B>A)
  {
    C=B-A;
    printf("A diferenca entre a maior e a menor variavel : %d", C);
  }
  else
  {
   C=A-B;
   printf("A diferenca entre a maior e a menor variavel : %d", C);
  }
 }
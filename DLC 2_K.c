#include<stdio.h>
#include<math.h>
void main ()
{
 float A;
 printf("Digite um valor: ");
 scanf("%f", &A);
 if (A>=1 && A<=9)
 {
   printf("O valor digitado esta dentro da faixa de 1 a 9");
 }
 else
 {
   printf("O valor digitado nao esta na faixa de 1 a 9");
 }
}
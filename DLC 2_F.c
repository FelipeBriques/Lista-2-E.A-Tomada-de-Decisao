#include<stdio.h>
void main()
{
   float a,b,c,aux;
   printf("Digite A: ");
   scanf("%f",&a);
   printf("Digite B: ");
   scanf("%f",&b);
   printf("Digite C: ");
   scanf("%f",&c);
   
   if (a>b)
   {
      aux=a;
      a=b;
      b=aux;
   }
   
   if (a>c)
   {
      aux=a;
      a=c;
      c=aux;
   }
   
   if (b>c)
   {
      aux=b;
      b=c;
      c=aux;
   }
   
   printf("Em ordem crescente: %.1f, %.1f, %.1f", a,b,c);
}
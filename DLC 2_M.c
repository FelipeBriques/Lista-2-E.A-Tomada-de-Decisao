#include<stdio.h>
#include<math.h>
void main ()
{
 char sexo;
 char nome[100];
 printf("Nome: ");
 scanf("%s",&nome);
 printf("Sexo (M/F): ");
 scanf("%s",&sexo);
 
 switch(sexo)
 {
 case 'M':
 printf("Ilmo.Sr %s",nome);
 break;
 
 case 'F':
 printf("Ilma.Sra %s",nome);
 break;
 
 default: printf("Sexo informado invalido");
 }
}
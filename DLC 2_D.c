#include<stdio.h>
void main()
{
    float N1 ,N2 ,N3 ,N4 ,MD1 ,NE ,MD2; 

    printf("Digite o valor de N1: ");
    scanf("%f",&N1); 

    printf("Digite o valor de N2: ");
    scanf("%f",&N2); 

    printf("Digite o valor de N3: ");
    scanf("%f",&N3); 

    printf("Digite o valor de N4: ");
    scanf("%f",&N4); 

    MD1=(N1+N2+N3+N4)/4; 

    if (MD1>=7)
    {
        printf("Aprovado: %.1f",MD1);
    }
    else
    {
    printf("Apresente a nota de exame: ");
    scanf("%f",&NE); 

    MD2=(MD1+NE)/2; 

    if (MD2>=7)
        {
            printf("Aprovado em exame: %.1f",MD2);
        }
    else
        {
          printf("Reprovado: %.1f",MD2);
        }
    }
}
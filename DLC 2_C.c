#include<stdio.h>
void main()
{
    float N1 ,N2 ,N3 ,N4 ,MD; 

    printf("Digite o valor de N1: ");
    scanf("%f",&N1); 

    printf("Digite o valor de N2: ");
    scanf("%f",&N2); 

    printf("Digite o valor de N3: ");
    scanf("%f",&N3); 

    printf("Digite o valor de N4: ");
    scanf("%f",&N4); 

    MD=(N1+N2+N3+N4)/4; 

    if (MD>=5)
    {
        printf("Aprovado: %.1f",MD);
    }
    else
    {
    printf("Reprovado: %.1f",MD);
    }
}
#include <stdio.h>
#include <math.h>
void main()
{
    float A, B, C, X1, X2, DELTA; 

    printf("Digite o valor de A: ");
    scanf("%f", &A); 

    printf("Digite o valor de B: ");
    scanf("%f", &B); 

    printf("Digite o valor de C: ");
    scanf("%f", &C); 

    DELTA = ((B*B)-4*A*C); 

    if (DELTA<0)
    {
        printf("Nao tem valor real para essa solucao =( \n");
    }
    else if (DELTA==0)
    {
        X1=(-B)/(2*A);
        printf("O valor de x eh: %.2f", X1);
    }
    else
    {
        X1=(-B+sqrt(DELTA))/(2*A);
        X2=(-B-sqrt(DELTA))/(2*A);
        printf("As raizes sao: X1 = %.2f e X2 = %.2f", X1, X2);
    }
}
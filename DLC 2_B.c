#include<stdio.h>
void main()
{
    int N; 

    printf("Digite o valor de N: ");
    scanf("%d",&N); 

    if (N>=0)
    {
        printf("O valor de N eh: %d", N);
    }
    else
    {
        N=N*(-1);
        printf("O novo valor de N eh: %d", N);
    }
}
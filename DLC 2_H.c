#include<stdio.h>
#include<math.h>
void main ()
{
    int A,B,C,D;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    if ((A%2)==0 || (A%3)==0)
    {
        printf("%d ", A);
    }
    if ((B%2)==0 || (B%3)==0)
    {
        printf("%d ", B);
    }
    if ((C%2)==0 || (C%3)==0)
    {
        printf("%d ", C);
    }
    if ((D%2)==0 || (D%3)==0)
    {
        printf("%d", D);
    }
}

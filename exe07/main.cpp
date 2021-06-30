#include <stdio.h>

int main(void)
{
    int primeiro_numero;
    int segundo_numero;
    printf("digite o primeiro numero: ");
    scanf("%d",&primeiro_numero);
    printf("digite o segundo numero: ");
    scanf("%d",&segundo_numero);
    printf("%d + %d = %d\n",primeiro_numero,segundo_numero,primeiro_numero+segundo_numero);
    return 0;

}
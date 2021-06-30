#include <stdio.h>

int main(void)
{
    float primeiro_numero;
    float segundo_numero;
    printf("digite o primeiro numero: ");
    scanf("%f",&primeiro_numero);
    printf("digite o segundo numero: ");
    scanf("%f",&segundo_numero);
    printf("%.1f divido por %.1f e igual a %.1f\n",primeiro_numero,segundo_numero,primeiro_numero/segundo_numero);
    return 0; 

}
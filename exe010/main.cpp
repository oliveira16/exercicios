#include <stdio.h>

int main(void)
{
    int primeira_variavel;
    int segunda_variavel;
    printf("digite o valor da primeira variavel: ");
    scanf("%d",&primeira_variavel);
    printf("digite o valor da segunda_variavel: ");
    scanf("%d",&segunda_variavel);
    printf("%d - %d = %d\n",primeira_variavel,segunda_variavel,primeira_variavel-segunda_variavel);
    return 0;

}
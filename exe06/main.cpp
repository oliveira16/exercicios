#include <stdio.h>

int main(void)
{
    const float max = 800;
    float qtd_estoque = 1000*9;
    float total = 26*max;
    printf("%.1f\n", total - qtd_estoque);// (26*800)-(1000*9)
    return 0 ;
}
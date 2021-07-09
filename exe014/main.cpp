#include <stdio.h>

int soma(int a, int b)
{    
    return a+b;
}


int main(void)
{
    int n;
    int a;
    printf("digite o primeiro valor  : ");
    scanf("%d",&n);
    printf("digite o segundo valor : ");
    scanf("%d",&a);
    printf("%d + %d = %d\n", n,a, soma(n, a) );
    return 0;
}
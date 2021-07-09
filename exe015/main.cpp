#include <stdio.h>

int multi(int a, int b )
{
    return a*b;
}


int main(void)
{
    int v1;
    int v2;
    printf("digite o primeiro valor : ");
    scanf("%d",&v1);
    printf("digite o segundo valor : ");
    scanf("%d",&v2);
    printf("%d * %d = %d\n ",v1, v2, multi(v1,v2));
    return 0;
}

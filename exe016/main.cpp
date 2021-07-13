#include <stdio.h>

int div(int a, int b)
{
	return a/b;
}

int main(void)
{ 
	int v1;
	int v2;
	printf("digite o primeiro numero : ");
	scanf("%d",&v1);
	printf("digite o segundo numero : ");
	scanf("%d",&v2);
	printf("%d / %d = %d\n",v1, v2, div(v1, v2) );
	

	return 0;
}
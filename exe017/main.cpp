#include <stdio.h>
#include <string.h>

int div(int a, int b)
{
	return a/b;
}


int soma(int a, int b)
{
	return a+b;
}


int mult(int a, int b)
{
	return a*b;
}


int sub(int a, int b)
{
	return a-b;
}

int main(void)
{
	char op[10];
	printf("qual o tipo de operacao voce quer executar ? ");
	scanf("%s",op);
	int v1;
	int v2;
	printf("digite o primeiro numero : ");
	scanf("%d",&v1);
	printf("digite o segundo numero : ");
	scanf("%d",&v2);
	int result;
	if(strcmp(op,"soma")== 0)
	{
		result = soma(v1, v2);	
	}	
	else if(strcmp(op,"mult")== 0)
	{
		result = mult(v1, v2);
	}
	else if(strcmp(op,"sub")== 0)
	{
		result = sub(v1, v2);
	}
	else if(strcmp(op,"sub")== 0)
	{
		result = div(v1, v2);
	}
	else 
	{
		printf("operacao invalida");
		return 1;
	}
	printf("o resultado e : %d\n",result);
	return 0;
}

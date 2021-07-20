#include <stdio.h>

int converterDiasParaHoras(int dias)
{
	return dias*24;
}

int main (void)
{
	int dias;
	printf("digite um valor em dias : ");
	scanf("%d",&dias);
	int horas = converterDiasParaHoras(dias);
	printf("%d dias e igual a %d horas\n",dias,horas );
	return 0;
}
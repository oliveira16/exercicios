#include <stdio.h>

int converterHorasParaMinutos(int horas)
{
	return horas*60;
}

int main(void)
{
	int horas;
	printf("digite um valor em horas : ");
	scanf("%d",&horas);
	int minutos =converterHorasParaMinutos(horas);
	printf("%d horas e igual a %d minutos\n",horas,minutos);
	return 0;
}
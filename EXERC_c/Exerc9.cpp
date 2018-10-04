#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float SEG, HR, MIN;
	printf("Digite um valor em segundos: ");
	scanf("%f", &SEG);
	MIN = SEG / 60;
	HR = MIN / 60;
	printf("Os segundos informados correspondem à %.2f minutos\n", MIN);
	printf("Os segundos informados correspondem à %.2f horas\n", HR);
	
	return 0;
}

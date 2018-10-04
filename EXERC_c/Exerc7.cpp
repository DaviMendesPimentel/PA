#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float VH, HT, BN, ND, SB, SL;
	
	BN = 300;
	printf("Digite o valor da hora: ");
	scanf("%f", &VH);
	printf("Digite a quantidade de horas trabalhadas no mês: ");
	scanf("%f", &HT);
	printf("Digite o número de dependentes: ");
	scanf("%f", &ND);
	SB = VH * HT;
	SL = SB + (BN * ND);
	printf("Seu salário bruto é %.2f e o salário líquido é %.2f\n", SB, SL);
		
	return 0;
}

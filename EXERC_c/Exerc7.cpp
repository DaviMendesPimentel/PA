#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float VH, HT, BN, ND, SB, SL;
	
	BN = 300;
	printf("Digite o valor da hora: ");
	scanf("%f", &VH);
	printf("Digite a quantidade de horas trabalhadas no m�s: ");
	scanf("%f", &HT);
	printf("Digite o n�mero de dependentes: ");
	scanf("%f", &ND);
	SB = VH * HT;
	SL = SB + (BN * ND);
	printf("Seu sal�rio bruto � %.2f e o sal�rio l�quido � %.2f\n", SB, SL);
		
	return 0;
}

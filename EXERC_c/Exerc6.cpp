#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float DP, S1, S2, S3;
	
	DP = 500;
	printf("O depósito inicial é de: %.2f\n", DP);
	S1 = DP + ((DP / 100) * 1);
	S2 = S1 + ((S1 / 100) * 1);
	S3 = S2 + ((S2 / 100) * 1);
	
	printf("O saldo após o terceiro mês é: %.2f\n", S3);
	
		
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float X, N, RES;
	
	printf("Digite um valor para X: ");
	scanf("%f", &X);
	printf("Digite um valor para N: ");
	scanf("%f", &N);
	RES = pow((X * N), 2);
	printf("O resultado do c�lculo de (X * N) ** 2 �: %f", RES);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	const int pi = 3.14159;
	setlocale(LC_ALL, "Portuguese");
	float R, VOL;
	printf("Digite o raio de uma esfera: ");
	scanf("%f", &R);
	VOL = (4 / 3) * (pi * pow(R, 3)) ;
	printf("O Volume da esféra é: %.2f", VOL);
	
	return 0;
}

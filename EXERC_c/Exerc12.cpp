#include <stdio.h>
#include <locale.h>

int main()
{
	const float pi = 3.14159;
	float R, ALT, AREA;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o raio de uma lata: ");
	scanf("%f", &R);
	printf("Digite a altura de uma lata: ");
	scanf("%f", &ALT);
	AREA = 2 * (pi * R * ALT);
	printf("A �rea externa de uma lata � %f\n", AREA);
	
	return 0;
}

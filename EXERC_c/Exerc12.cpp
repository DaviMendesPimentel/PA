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
	printf("A área externa de uma lata é %f\n", AREA);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float BST, ALT, ART;
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &BST);
	printf("Digite a altura do tri�ngulo: ");
	scanf("%f", &ALT);
	ART = (BST * ALT) / 2;
	printf("A �rea do tri�ngulo �: %f", ART);
	
	
	return 0;
}

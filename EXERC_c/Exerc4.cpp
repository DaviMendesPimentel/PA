#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float BST, ALT, ART;
	printf("Digite a base do triângulo: ");
	scanf("%f", &BST);
	printf("Digite a altura do triângulo: ");
	scanf("%f", &ALT);
	ART = (BST * ALT) / 2;
	printf("A área do triângulo é: %f", ART);
	
	
	return 0;
}

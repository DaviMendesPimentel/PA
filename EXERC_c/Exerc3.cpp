#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float BS, AL, AR;
	printf("Digite a base do retângulo: ");
	scanf("%f", &BS);
	printf("Digite a altura do retângulo: ");
	scanf("%f", &AL);
	AR = BS * AL;
	printf("A Área do retângulo é: %f\n", AR);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float BS, AL, AR;
	printf("Digite a base do ret�ngulo: ");
	scanf("%f", &BS);
	printf("Digite a altura do ret�ngulo: ");
	scanf("%f", &AL);
	AR = BS * AL;
	printf("A �rea do ret�ngulo �: %f\n", AR);
	
	return 0;
}

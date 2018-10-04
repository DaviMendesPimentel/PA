#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char Nome[30];
	float N1, N2, N3, N4, MD;
	
	printf("Digite o Nome do aluno: ");
	gets(Nome);
	printf("Digite a primeira nota: ");
	scanf("%f", &N1);
	printf("Digite a segunda nota: ");
	scanf("%f", &N2);
	printf("Digite a terceira nota: ");
	scanf("%f", &N3);
	printf("Digite a quarta nota: ");
	scanf("%f", &N4);
	
	MD = ( N1 + N2 + N3 + N4) / 4;
	printf("%s, a sua média aritmética é %f", Nome, MD);
	return 0;
}


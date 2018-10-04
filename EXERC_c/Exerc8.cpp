#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float CM, MT, DC, MM;
	printf("Digite uma medida em centímetros: ");
	scanf("%f", &CM);
	MT = CM / 100;
	DC = CM / 10;
	MM = CM * 10;
	printf("Há %.2f metros na medida informada\n", MT);
	printf("Há %.2f decímetros na medida informada\n", DC);
	printf("Há %.2f milímetros na medida informada\n", MM);
	
	return 0;
}

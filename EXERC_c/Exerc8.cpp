#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float CM, MT, DC, MM;
	printf("Digite uma medida em cent�metros: ");
	scanf("%f", &CM);
	MT = CM / 100;
	DC = CM / 10;
	MM = CM * 10;
	printf("H� %.2f metros na medida informada\n", MT);
	printf("H� %.2f dec�metros na medida informada\n", DC);
	printf("H� %.2f mil�metros na medida informada\n", MM);
	
	return 0;
}

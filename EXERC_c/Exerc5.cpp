#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int AN, AA, IDA, ID2050;
	
	AA = 2018;
	printf("Digite o ano em que você nasceu: ");
	scanf("%d", &AN);
	IDA = AA - AN;
	ID2050 = 2050 - AN;
	
	printf("Sua idade atual é %d\n", IDA);
	printf("Sua idade em 2050 será %d\n", ID2050);
	
	return 0;
}

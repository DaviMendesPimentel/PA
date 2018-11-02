#include <stdio.h>
#include <locale.h>
#define QTD_DE_MESES 12

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int escolha_mes;
    const char * const meses[QTD_DE_MESES] =
    {
        "Janeiro",
        "Fevereiro",
        "Mar�o",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"
    };

    printf("Insira um n�mero de um m�s: ");
    scanf("%d", &escolha_mes);

    if(escolha_mes > 0 && escolha_mes < 13)
        printf("O m�s escolhido foi %s\n", meses[escolha_mes - 1]);

    else printf("Valor inv�lido");

    return 0;
}
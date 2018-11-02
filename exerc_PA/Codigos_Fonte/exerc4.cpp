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
        "Março",
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

    printf("Insira um número de um mês: ");
    scanf("%d", &escolha_mes);

    if(escolha_mes > 0 && escolha_mes < 13)
        printf("O mês escolhido foi %s\n", meses[escolha_mes - 1]);

    else printf("Valor inválido");

    return 0;
}
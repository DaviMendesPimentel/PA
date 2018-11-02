#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_LANCHES 5

using namespace std;

enum opcoes{ BIGMAC = 1, QUARTEIRAO, MACCHICKEN, CHEDDAR_MACMELT, MACMAX};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const char * const lanches[NUMERO_DE_LANCHES] =
    {   "BigMac",
        "Quarteirão",
        "MacChicken",
        "Cheddar MacMelt",
        "MacMax"};
    int escolha;

    __escolha:
    printf("Escolha o seu lanche através do número: \n");

    for(int i = 0; i < NUMERO_DE_LANCHES; i++)
        printf("%d - %s\n", i + 1, lanches[i]);

    printf("? ");
    scanf("%d", &escolha);
    switch(escolha){
    case BIGMAC:
    case QUARTEIRAO:
    case MACCHICKEN:
    case CHEDDAR_MACMELT:
    case MACMAX:
        printf("Voce escolheu o %s.", lanches[escolha - 1]);
        break;
    default:
        printf("Insira um valor válido por favor.");
        goto __escolha;
    }

    printf("\n");
}
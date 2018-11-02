#include <stdio.h>

using namespace std;

int main()
{
    double hora_inicial;
    printf("Insira o seu horario inicial de trabalho: ");
    scanf("%lf", &hora_inicial);

    if(hora_inicial >= 5 && hora_inicial < 13)
        printf("Voce trabalha de manha.");
    else if(hora_inicial >= 13 && hora_inicial < 21)
        printf("Voce trabalha a tarde");

    else printf("Voce trabalha a noite");

    return 0;
}

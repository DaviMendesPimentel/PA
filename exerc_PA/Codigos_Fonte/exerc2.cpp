#include <stdio.h>

int main()
{
    double peso, altura, IMC;
    printf("Insira o seu peso: ");
    scanf("%lf", &peso);
    printf("Insira a sua altura: ");
    scanf("%lf", &altura);

    IMC = peso / (altura * altura);

    printf("Voce esta ");

    if(IMC < 18)
        printf("magro.");
    else if(IMC >= 18 && IMC < 25)
        printf("saudavel.");
    else if(IMC >= 25 && IMC < 30)
        printf("acima do peso.");

    else printf("obeso.");
    printf("\n");
    return 0;
}

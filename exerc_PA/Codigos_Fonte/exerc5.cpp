#include <stdio.h>
#define NUMERO_DE_NOTAS 4

using namespace std;

int main()
{
    double notas[NUMERO_DE_NOTAS], total, media;

    for(int i = 0; i < NUMERO_DE_NOTAS; i++){
        printf("Insira o valor da nota#%d: ", i + 1);
        scanf("%lf", &notas[i]);
        total += notas[i];
    }

    media = total / NUMERO_DE_NOTAS;
    if(media >= 5){
        printf("Aprovado com Nota: ");

        if(media >= 9)
            printf("A!");
        else if(media >= 7 && media < 9)
            printf("B!");
        else
            printf("C.");
    }
    else{
        printf("Reprovado com nota: ");
        if(media >= 2.5 && media < 5)
            printf("D...");

        else
            printf("E...");
    }
    printf("\n");

    return 0;
}
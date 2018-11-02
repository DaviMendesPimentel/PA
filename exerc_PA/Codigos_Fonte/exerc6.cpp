#include <stdio.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Insira a sua idade nadador: ");
    scanf("%d", &idade);

    if(idade < 5) {
        printf("Idade Inválida para a competição.\n");
        return 0;
    }
    else if(idade >= 5 && idade <= 10){
        printf("Infantil ");
        if(idade >= 5 && idade <= 7)
            printf("A.");
        else
            printf("B.");
    }
    else if(idade >= 11 && idade <= 17){
        printf("Juvenil ");
        if(idade >= 11 && idade <= 13)
            printf("A.");
        else
            printf("B.");
    }
    else printf("Senior.");

    printf("\n");

    return 0;
}
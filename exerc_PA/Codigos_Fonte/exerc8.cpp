#include <stdio.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double a, b, c;
    printf("Insira o valor do lado \'a\' do tri�ngulo: ");
    scanf("%lf", &a);

    printf("Insira o valor do lado \'b\' do tri�ngulo: ");
    scanf("%lf", &b);

    printf("Insira o valor do lado \'c\' do tri�ngulo: ");
    scanf("%lf", &c);

    if(a == b && b == c)
        printf("Tri�ngulo Equil�tero\n");
    else if(a == b || b == c || c == a )
        printf("Tri�ngulo Is�sceles\n");

    else printf("Tri�ngulo Escaleno\n");

    return 0;
}
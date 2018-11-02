#include <stdio.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double a, b, c;
    printf("Insira o valor do lado \'a\' do triângulo: ");
    scanf("%lf", &a);

    printf("Insira o valor do lado \'b\' do triângulo: ");
    scanf("%lf", &b);

    printf("Insira o valor do lado \'c\' do triângulo: ");
    scanf("%lf", &c);

    if(a == b && b == c)
        printf("Triângulo Equilátero\n");
    else if(a == b || b == c || c == a )
        printf("Triângulo Isósceles\n");

    else printf("Triângulo Escaleno\n");

    return 0;
}
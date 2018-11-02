#include <stdio.h>
#include <locale.h>
#include <iostream>

using namespace std;

class Data{

public:
    Data(int = 0, int = 0, int = 0);
    bool operator==(Data);
    bool operator>(Data);
    bool operator<(Data);
    void printDataObj()const;
private:
    int dia;
    int mes;
    int ano;
};

Data::Data(int d, int m, int a)
{
    ano = a;
    mes = ((m > 0 && m < 13) ? m : 0);
    dia = ((d > 0 && d < 32) ? d : 0);
}

bool Data::operator==(Data data2)
{
    if(ano == data2.ano)
        if(mes == data2.mes)
            if(dia == data2.dia)
                return true;

    return false;
}

bool Data::operator<(Data data2)
{
    if(ano < data2.ano)
        return true;

    else if(ano == data2.ano){

        if(mes < data2.mes)
            return true;

        else if(mes == data2.mes){

            if(dia < data2.dia)
                return true;

            else return false;
        }
        else return false;
    }

    return false;

}
bool Data::operator>(Data data2)
{
    if(ano > data2.ano)
        return true;

    else if(ano == data2.ano){

        if(mes > data2.mes)
            return true;

        else if(mes == data2.mes){

            if(dia > data2.dia)
                return true;

            else return false;
        }
        else return false;
    }

    return false;
}

void Data::printDataObj()const
{
    cout << "Data: " << (dia < 10 ? "0" : "") << dia
         << "/" << (mes < 10 ? "0" : "") << mes
         << "/" << ano << endl;
}

int main()
{
    int d[2], m[2], a[2];
    setlocale(LC_ALL, "Portuguese");

    for(int i = 0; i < 2; i++){
        printf("Digite a data#%d: \n", i + 1);
        printf("dia: ");
        scanf("%d", &d[i]);

        printf("mês: ");
        scanf("%d", &m[i]);

        printf("ano: ");
        scanf("%d", &a[i]);
    }
    Data data1(d[0], m[0], a[0]);
    Data data2(d[1], m[1], a[1]);

    if(data1 < data2){
        printf("data1 é menor que data2\n");

        data1.printDataObj();
        data2.printDataObj();
    }
    else if(data1 == data2){
        printf("as datas são iguais");
    }
    else if(data1 > data2){
        printf("data1 é maior que data2\n\n");

        data2.printDataObj();
        data1.printDataObj();
    }
    printf("\n");

    return 0;
}
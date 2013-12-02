#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int numero;

void ingreso(int &numero)
{
    do
    {
       cout<<"Ingrese un numero..:";
       cin>>numero;
    }while (!(((numero%5)==0) or ((numero%2)==0)));

}
void calcular (int numero,int &ccifras)
{
    while(numero>0)
    {
        numero=numero/10;
        ccifras++;
    }
}
void presentar (int ccifras)
{
    cout<<"Contador de cifras..:"<<ccifras<<"\n";
}
int main()
{

    for (int i=0;i<5;i++)
    {
        int ccifras=0;
        ingreso(numero);
        calcular(numero,ccifras);
        presentar(ccifras);
    }
    return 0;
}

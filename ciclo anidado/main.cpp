#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
elaborar un programa donde ingresemos un numero, luego
preguntar si deseamos ingresar otro numero.
al finalizar presentar la suma de los numerosingresados
*/
int main()
{int numero, suma=0; char resp;
do
{
    do
    {
        cout<<"Ingresar un numero entre 1-100...:";
        cin>>numero;
    }while ((numero<1) or (numero>100));

       _flushall();


    do
    {
        cout<<"desea continuar...:";
        cin.get(resp);
    }while ((resp!='N') and (resp!='S'));
suma+=numero;
}while (resp!='N');
cout<<"La suma es..:"<<suma<<"\n";
cout<<"Programa finalizado";

    return 0;
}

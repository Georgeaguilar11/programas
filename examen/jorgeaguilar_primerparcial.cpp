#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{int numero,suma=0,cifra,mayor,contador,suma2=0;
char resp;
double promedio;
mayor=0;
contador=0;
do
{
    do
    {
        cout<<"Ingrese el numero..:";
        cin>>numero;

    }while (!(((numero>=1) and (numero<=200)) and ((numero%2)==0)));
    _flushall();


    while (numero>0)
    {

        cifra= numero % 10;
        numero=numero/10;
        suma+=cifra;

    }


    do
    {
        cout<<"Desea continuar..:";
        cin.get(resp);
        _flushall();
    }while ((resp!='S') and (resp!='N'));


    if (numero>mayor)
    {
         mayor=numero;
    }

    if (((numero>=1) and (numero<=200)) and ((numero%2)==0))
    {
        suma2+=numero;
        contador++;
    }

    if (contador!=0)
    {
        promedio=suma2/contador;
    }
    else
    {
        promedio=0;
    }

}while (resp!='N');

cout<<"Suma de los digitos..:"<<suma<<"\n";
cout<<"El numero mayor es..:"<<mayor<<"\n";
cout<<"El promedio es..:"<<promedio<<"\n";

    return 0;
}

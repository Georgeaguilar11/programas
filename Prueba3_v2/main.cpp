#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int numero,vccifras;

int ingreso()
{int numero;
    do
    {
       cout<<"Ingrese un numero..:";
       cin>>numero;
    }while (!(((numero%5)==0) or ((numero%2)==0)));
return ccifras
}
int contarCifras(int numero)
{int ccifras;
    while(numero>0)
    {
        numero=numero/10;
        ccifras++;
    }
return ccifras;
}

int main()
{

    for (int i=0;i<5;i++)
    {
        vnumero=ingreso();
        vncifras=contarCifras(vnumero);
        cout<<vnumero<<" tiene "<<vccifras<<"cifras
    }
    return 0;
}

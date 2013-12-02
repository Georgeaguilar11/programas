#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
elaborar un procedimiento para ingresar un
numero entre 1-10

luego determinar el factorial del numero ingresado usando una funcion.

hacerlo para 5 numeros (usar ciclo for)
*/
int numero, factor;
void ingresar(int &numero)
{
    do
    {
        cout<<"ingresar el numero..";
        cin>>numero;
    }while ((numero<1) or (numero>10));
}
int factorial(int numero)
{int factor=1;
    for (int i=1;i<=numero;i++)
    {
        factor*=i;
    }
return factor;
}

int main()
{int numero, factor;
    for (int i=0;i<5;i++)
    {
        ingresar(numero);
        factor=factorial(numero);
        cout<<"Factorial es "<<factor<<"\n";
    }
    return 0;
}

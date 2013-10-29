#include <iostream>

using namespace std;
/*
Ingresar un numero y presentar su suma
*/
int main()
{   int numero,nveces,suma,contador,spar,simpar;
    contador=0;
    suma=0;
    spar=0;
    simpar=0;

    cout<<"Cuantos numeros desea ingresar?";
    cin>>nveces;

    while(contador<nveces)//uso el ciclo con nveces para que el ciclo se cierre con la cantidad de numeros que uno quiera ingresar
    {
        cout<<"Ingresar un numero...>";
        cin>>numero;

        if ((numero % 2)==0)//uso el mod para sacar la suma de los pares e impares
        {
            spar+=numero;
        }
        else
        {
            simpar+=numero;
        }
        contador++;
    }
    suma=spar+simpar;//al final uso esta formula para sumar los pares e impares y asi sacar una suma general

    cout<<"La suma es..:"<<suma<<"\n";
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
ingresar 5 cadenas de tipo char a un arreglo usando un procedimiento,luego
elaborar una funcion que cuente cuantas consonantes tienen cada unos de los nombres
elaborar un procedimiennto para agregar al final de la cadena un asterico
presentar la cadena modificada con el asterico y a la par el numero
de consonantes que tienen
*/
const int n=5;
char cadena[n][30];
int consonante[n];

void ingresar ( char cadena[n][30])
{
    for (int i=0;i<n;i++)
    {
         cout<<"Ingresar el nombre : ";
         cin.getline(cadena[i],30);
    }
}
int contarc(char cadena[])
{
    int i,consonantes,nl;
    nl=strlen(cadena);
    consonantes=0;
    for (int i=0;i<nl;i++)
    {
        switch (cadena[i])
        {
             case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    break;
                    default:consonantes++;
                    break;
        }
    }return consonantes;
}
void contarConsonantes(char cadena[n][30],int consonante[])
{
    for (int i=0;i<n;i++)
    {
        consonante[i]=contarc(cadena[i]);
    }
}
void asterico(char cadena[n][30])
{int nl;
    for (int i=0;i<n;i++)
    {
       nl=strlen(cadena[i]);
       cadena[i][nl]='*';
    }
}
void presentar(char cadena[n][30],int consonante[])
{
    for (int i=0;i<n;i++)
    {
        cout<<cadena[i]<<" "<<consonante[i]<<"\n";
    }
}
void pmayor(char nombre[n][30],int consonante[])
{
    int pos,mayor=0;

    for (int i=0;i<n;i++)
    {
        if (mayor<consonante[i])
        {
            mayor=consonante[i];
            pos=i;
        }
    }
    cout<<"Mayor es "<<cadena[pos]<<" Con "<<mayor<<"\n";
}
int main()
{
    ingresar(cadena);
    contarConsonantes(cadena,consonante);
    asterico(cadena);
    presentar(cadena,consonante);
    pmayor(cadena,consonante);

    return 0;
}

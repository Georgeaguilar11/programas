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
char cadena[5][30];

void ingresar ( char cadena[5][30])
{
    for (int i=0;i<5;i++)
    {
         cout<<"Ingresar el nombre : ";
         cin.getline(cadena[i],30);
    }
}
int consonantes(char cadena[30])
{
    int fin=strlen(cadena);
    int contador=0;
    for (int i=0;i<fin;i++)
    {
        char letra=cadena[i];
        switch (letra)
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
                    default:contador++;
                    break;
        }
    }
}
void asterico(char cadena[5][30])
{int nl;
    for (int i=0;i<5;i++)
    {
       nl=strlen(cadena[i]);
       cadena[i][nl]='*';
    }
}
void presentar(char cadena[5][30])
{
    for (int i=0;i<5;i++)
    {
        cout<<cadena[i]<<" "<<consonantes(cadena[i])<<endl;
    }
}
int main()
{
    ingresar(cadena);
    asterico(cadena);
    presentar(cadena);
    return 0;
}

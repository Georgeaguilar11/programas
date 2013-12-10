#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
string cadena;
int main()
{
    cout<<"Ingresar la cadena..:";
    cin>>cadena;
    string subcadena (cadena, 2, 6);
    cout<<"Valor de Subcadena "<<subcadena<<"\n";
    string cortar;
    cortar=cadena.substr(0, 5);
    cout<<"Valor de cortar "<<cortar<<"\n";
    cout<<"Tamaño de la cadena "<<cadena.size()<<"\n";
    string insertado;
    insertado=cadena;
    insertado=cadena.insert(1, "Juan");
    cout<<"Valor de insertado "<<insertado<<"\n";
    string ree;
    /*ree=cadena;
    ree=cadena.replace( 1, 1, "a");
    cout<<"Valor ree "<<ree<<"\n";
    */
    return 0;
}

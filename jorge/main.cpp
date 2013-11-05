#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{ int numero,cifra, sdigitos, contador=0, prom, suma=0;
  int mayor=0;
  char resp;

do
{
    do
    {
        cout<<"Ingrese un numero : ";
        cin>>numero;
    } while (!(((numero>0) and (numero<=200)) and ((numero%2)==0)));

      suma+=numero;
      contador++;

     if (numero>mayor)
        mayor=numero;

    _flushall();

    sdigitos=0;
    while (numero>0)
    {
        cifra=numero%10;
        numero=numero/10;
        sdigitos+=cifra;
        _flushall();
    }
        cout<<"La suma de sus digito es : "<<sdigitos<<"\n";
    do
    {
        cout<<"Desea continuar.. ";
        cin.get(resp);
        _flushall();
    } while ((resp!='S') and (resp!='N'));

    if (contador>0)
       prom=suma/contador;
    else
       prom=0;

}while (resp!='N');

cout<<"El numero mayor ingresado : "<<mayor<<"\n";
cout<<"La suma de los numeros : "<<suma<<"\n";
cout<<"Cantidad de numeros : "<<contador<<"\n";
cout<<"El promedio fue : "<<prom<<"\n";

    return 0;
}

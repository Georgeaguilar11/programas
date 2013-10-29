#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int numero,mayor=0,menor=1000000;
   char resp;

   do
    {
    do
    {
        cout << "Ingrese un Numero: " ;
        cin >> numero;


    } while (((numero<50) or (numero>150)) or ((numero%2)!=0)) ;
_flushall();

do
{

        cout<<"Desea continuar ...:";
        cin.get(resp);


}while ((resp !='S') and  (resp !='N'));
        if (numero>mayor)
        {
            mayor=numero;
        }
    if (numero<menor)
        {
            menor=numero;
        }
    }  while  (resp !='N');




        cout<<"Numero mayor es..:"<<mayor<<"\n";
        cout<<"Numero menor es..:"<<menor<<"\n";
    return 0;
}

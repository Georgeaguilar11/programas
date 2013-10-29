#include <iostream>

using namespace std;
/*
ingresar la cantidad de numeros que necesitamos pedir.
luego ingresar el numero y determinar si es par o impar.
al final presentar cuantos fueron pares e impares
*/
int main()
{int numero,cpar,cimpar,contador,nveces;
contador=0;
cpar=0;
cimpar=0;
cout<<"Cuantos numeros desea ingresar?";
cin>>nveces;
while(contador<nveces)
{
cout<<"Ingresar un numero...>";
cin>>numero;

if ((numero % 2)==0)
{
    cout<<"el numero es par"<<"\n";
    cpar++;
}
else
{
   cout<<"el numero es impar"<<"\n";
    cimpar++;
}
contador++;
}
    cout<<"numero de pares "<<cpar<<"\n";
    cout<<"numero de impares "<<cimpar<<"\n";
    return 0;
}

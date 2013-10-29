#include <iostream>

using namespace std;
/*
ingresar 5 numeros y determinar el promedio de pares y el promedio de los impares
y determinar el numero mayor
*/
int main()
{int numero,ppares,pimpares,mayor,contador,menor;
    int spar,simpar;
    double cpares,cimpares;
    contador=0;
    cpares=0;
    cimpares=0;
    mayor=0;
spar=0;
simpar=0;
    menor=1000000;
    while (contador<5)
    {
        cout<<"Ingresar el numero...>";
        cin>>numero;

        if ((numero % 2)==0)
{
spar+=numero;
    cpares++;
}
else
{
    simpar+=numero;
    cimpares++;
}
contador++;
if (numero>mayor)
{
    mayor=numero;
}
 if (numero<menor)
{
    menor=numero;
}
}
cout<<"Numero menor es...>"<<menor<<"\n";
cout<<"Numero mayor es...>"<<mayor<<"\n";

 if (spar!=0)
 {
     ppares=spar/cpares;
 }
 else
 {
     ppares=0;
 }
 if (simpar!=0)
 {
     pimpares=simpar/cimpares;
 }
 else
 {
     pimpares=0;
 }
cout<<"Promedio pares...>"<<ppares<<"\n";
cout<<"Promedio impares...>"<<pimpares<<"\n";

    return 0;
}

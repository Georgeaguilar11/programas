#include <iostream>
/*
Ingresar un numero y determinar si es un numero positivo, negativo
 o cero
*/
using namespace std;

int main()
{int Numero;

cout<<"Ingresar Numero...>";
cin>>Numero;

if (Numero>0)
{
    cout<<"Es Positivo"<<"\n";
}
else if (Numero<0)
{
    cout<<"Es Negativo"<<"\n";
}
else
{
    cout<<"Es Cero"<<"\n";
}
    return 0;
}

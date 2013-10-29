#include <iostream>

using namespace std;
/*
ingresar la base y el exponente y determinar la potencia usando el ciclo for
*/
int main()
{int base,pot,exp;

pot=1;
cout<<"Ingrese la base...>";
cin>>base;

cout<<"Ingrese el exponente...>";
cin>>exp;

for (int i=0;i<exp;i++)
{
    pot*=base;
}
        cout<<"La potencia es:  "<<pot<<"\n";

    return 0;
}

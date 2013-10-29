#include <iostream>

using namespace std;
/*
ingresar 5 numeros y determinar cuantos son divisibles entre 3
*/
int main()
{int numero,cdiv3,sdiv3,promedio;
cdiv3=0;
sdiv3=0;
for (int i=0;i<5;i++)
    {
        cout<<"ingresar un numero entero";
        cin>>numero;
        if((numero % 3)==0)
        {
            sdiv3+=numero;
            cdiv3++;
        }
    }
    if (cdiv3>0)
    {
        promedio=sdiv3/cdiv3;
    }
    else
    {
        promedio=0;
    }

    cout<<"Contador de divisibles entre 3 es:  "<<cdiv3<<"\n";
    cout<<"Suma de divisbles entre 3 es:  "<<sdiv3<<"\n";
    cout<<"Promedio de divisibles entre 3 es:  "<<promedio<<"\n";
    return 0;
}

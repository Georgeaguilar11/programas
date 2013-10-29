#include <iostream>

using namespace std;
/*
ingresar 5 numeros y contar cuantos son positivos, negativos y ceros.
*/
int main()
{int numero,cpositivos,cnegativos,cceros,contador;
cpositivos=0;
cnegativos=0;
cceros=0;
contador=0;
while (contador<5)
    {
    cout<<"Ingresar un numero...>";
    cin>>numero;

    contador ++;

    if (numero>0)
    {
        cpositivos++;
    }
    else if (numero<0)
    {
        cnegativos++;
    }
    else
    {
        cceros++;
    }

}
    cout<<"contador de positivos...:"<<cpositivos <<"\n";
    cout<<"contador de negativos...:"<<cnegativos <<"\n";
    cout<<"contador de ceros...:"<<cceros <<"\n";
    return 0;
}

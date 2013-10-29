#include <iostream>

using namespace std;

int main()
{int num,cifra,ccifra,cpares,cimpares,suma,mayor,menor;
double promedio;

cout<<"Ingresar un numer entero....:";
cin>>num;
ccifra=0;
suma=0;
cpares=0,
cimpares=0;
mayor=0;
menor=10;
cout<<"numero al revez..:";
while (num>0)
    {

        cifra= num % 10;
        cout<<cifra;
        num=num/10;
        suma+=cifra;
        ccifra++;
        if (cifra>mayor)
        {
            mayor=cifra;
        }
        if (cifra<menor)
        {
            menor=cifra;
        }
        if ((cifra%2)==0)
        {
            cpares++;
        }
        else
        {
            cimpares++;
        }
    }

promedio=suma/ccifra;
    cout<<"\n";
    cout<<"Suma de las cifras"<<suma<<"\n";
    cout<<"Cifra mayor es...:"<<mayor<<"\n";
    cout<<"Cifra menor es...:"<<menor<<"\n";
    cout<<"Contador de cifra es...:"<<ccifra<<"\n";
    cout<<"promedio es...:"<<promedio<<"\n";
    cout<<"Contador de cifra pares es...:"<<cpares<<"\n";
    cout<<"Contador de cifra impares es...:"<<cimpares<<"\n";
    return 0;
}

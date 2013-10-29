#include <iostream>

using namespace std;
/*
ingresar 10 numeros al final presentar cuando numeros fueron divisibles entre 5 ,
el promedio de los divisibles entre 5 y el numero mayor de todos los numeros
*/
int main()
{int num,contador,suma,mayor;
double promedio;
contador=0;
suma=0;
mayor=0;


    for (int i=0;i<10;i++)
    {
        cout<<"ingresar un numero...>";
        cin>>num;

        if ((num%5)==0)
        {
            contador++;
            suma+=num;
        }
        if (num>mayor)
        {
            mayor=num;
        }
    }
    if (contador!=0)
    {
      promedio=suma/contador;
    }
    else
    {
        promedio=0;
    }
    cout<<"los numeros divisibles entre 5 son..:"<<contador<<"\n";
    cout<<"el promedio de los divisibles entre 5 son..:"<<promedio<<"\n";
    cout<<"el numero mayor es..:"<<mayor<<"\n";

    return 0;
}

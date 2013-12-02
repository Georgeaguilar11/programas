#include <iostream>

using namespace std;
const int tam=4;
int arreglo[4];
void ingresar(int arreglo[])
{
      for (int i=0;i<=tam;i++)
        {
            do
            {
            cout<<"Ingrese el numero..:";
            cin>>arreglo[i];
            }while (!((arreglo[i]%2)==0));
        }
}
int sumaArreglo(int arreglo[])
{int sumaA=0;
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]>100)
        {
            sumaA+=arreglo[i];
        }
    }
        return sumaA;
}
int mayorArreglo(int arreglo[])
{int maxn=0;
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0)
        {
            maxn=arreglo[i];
        }
    }
return maxn;
}
void modificarArreglo(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        arreglo[i]*=2;
    }
}
void presentar(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"El doble del arreglo es..:"<<arreglo[i]<<"\n";
    }
}
int main()
{int suma;
int mayor;
    ingresar(arreglo);
    suma=sumaArreglo(arreglo);
    mayor=mayorArreglo(arreglo);
    modificarArreglo(arreglo);
    presentar(arreglo);
    cout<<"la suma de los mayores a 100 es..:"<<suma<<"\n";
    cout<<"el mayor de los divisibles entre 5 es..:"<<mayor<<"\n";
    return 0;
}

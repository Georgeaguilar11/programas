#include <iostream>

using namespace std;
const int tam=4;
int arreglo[4];
int factor;
void ingresar(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingrese el numero..:";
        cin>>arreglo[i];
    }
}
void factorialArreglo(int arreglo[],int factor)
{
 for (int i=0;i<=tam;i++)
 {
     factor[i]=1;
     for (int j=1;j<=arreglo[i];j++)
     factor*=j;
 }
}
void presentarArreglo(int factor)
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"factoriales..:"<< factor <<"\n";
    }
}
int main()
{
    ingresar(arreglo);
    factorialArreglo(arreglo);
    presentarArreglo(factor);

    return 0;
}

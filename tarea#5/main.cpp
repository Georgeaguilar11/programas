#include <iostream>

using namespace std;
const int tam=4;
int arreglo[4];
void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"Ingresar numero..:";
        cin>>arreglo[i];
    }
}
void ascedente(int arreglo[])
{
    int temp;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<=tam-1;i++)
        {
            if (arreglo[i+1] < arreglo[i])
            {
                temp=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temp;
            }
        }
    }
}
void descendente (int arreglo[])
{
    int temp;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<=tam;i++)
        {
            if (arreglo[i+1] > arreglo[i])
            {
                temp=arreglo[i];
                arreglo[i]=arreglo[i+1];
                arreglo[i+1]=temp;
            }
        }
    }
}
void modificarArreglo(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i]%2==0)
        {
            arreglo[i]=0;
        }
    }
}
int main()
{
    ingreso(arreglo);
    ascedente(arreglo);//vamos ingresar el procedimiento
    cout<<"Ascedente..:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    descendente(arreglo);
    cout<<"Descendente..:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    modificarArreglo(arreglo);
    cout<<"Numeros pares iguales a cero..:";
    for (int j=0;j<=tam;j++)
    {
        cout<< arreglo[j] <<", ";
    }
    cout<<"\n";
    return 0;
}

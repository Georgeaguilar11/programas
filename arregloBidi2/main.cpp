#include <iostream>

using namespace std;
const int lin=4;
const int col=4;
int num[lin][col];
/*
tenemos un arreglo de 4 lineas y 4 columnas, pero solo vamos
a ingresar valores enlas tres primeras columnas y la ultima
la dejamos reservada para la suma de cada una de las lineas.
*/

void ingreso(int num[lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<col-1;c++)
        {
            cout<<"Ingresar Dato["<<l<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }
}
void sumalineas(int num[lin][col])
{
    for (int l=0;l<lin;l++)
    { num[l][col-1]=0;
        for (int c=0;c<col-1;c++)
        {
            num[l][col-1]+=num[l][c];
        }
    }
}
void presentar(int num[lin][col])
{
    for (int l=0;l<lin;l++)
    {
       for (int c=0;c<col;c++)
        {
            cout<<num[l][c]<<" ";
        }
    cout<<"\n";
    }
}
int main()
{
    ingreso(num);
    sumalineas(num);
    presentar(num);
    return 0;
}

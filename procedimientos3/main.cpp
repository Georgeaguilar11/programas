#include <iostream>
#include <stdio.h>
using namespace std;
/*
ingresar el nombre del empleado, las horas y el turno
usando un procedimiento.

luego determinar el pxh usando el turno, el pago de horas, ihss
y total a pagar usando un procedimiento
turno   pxh
1       100
2       150
3       180

presentar los datos usando un procedimiento
*/

char nombre[30];
int turno,horas,pb,ihss,tp;

void ingreso(char nombre[], int &horas,int &turno)
{
    cout<<"Ingrese el nombre del empleado..:";
    cin.getline(nombre,30);
    cout<<"Ingrese las Horas..:";
    cin>>horas;
    do
    {
        cout<<"Ingrese el Turno..:";
        cin>>turno;
    }while ((turno<1) or (turno>3));
    _flushall();



}
void calcular(int turno,int horas, int &pb,int &ihss,int &tp)
{
    switch (turno)
    {
    case 1:
        pb=100*horas;
        break;
    case 2:
        pb=150*horas;
        break;
    default:
        pb=180*horas;
        break;
    }


    if (pb>7000)
        ihss=245;
    else
        ihss=pb*0.035;

    tp=pb-ihss;

}
void presentar(int pb,int ihss,int tp)
{
    cout<<"El pago bruto es..:"<<pb<<"\n";
    cout<<"El seguro es..:"<<ihss<<"\n";
    cout<<"El total a pagar es..:"<<tp<<"\n";
}
int main()
{for (int i=0;i<3;i++)
{
    ingreso(nombre,horas,turno);
    calcular(turno,horas,pb,ihss,tp);
    presentar(pb,ihss,tp);
}
    return 0;
}

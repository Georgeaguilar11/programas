#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
ingrese el nombre del alumno, luego debemos de pedir
las tres notas parciales usando un ciclo, presentar el promedio, la
nota mayor de los tres parciales
preguntar si desea continuar, al final presentar el nombre del alumno con la mejor nota
*/
int main()
{char nombre[30];
char resp;
int nota,suma,promedio,notamax,alumnomax;
char nombremayor[30];
char estado [15];

do
{
    cout<<"Ingrese el nombre del alumno..:";
    cin.getline(nombre,30);
    suma=0;
    notamax=0;
    alumnomax=0;
    for (int i=1;i<=3;i++)
    {
        cout<<"Ingrese el parcial.."<<i<<"..:";
        cin>>nota;
        suma+=nota;

        if (nota>notamax)
            notamax=nota;
    }

    promedio=suma/3;
    if (promedio>=60)
    {
        strcpy(estado,"Aprobado");
    }
    else
    {
        strcpy(estado,"Reprobado");
    }
    cout<<"Promedio del alumno..:"<<promedio<<"\n";
    cout<<"Nota maxima del alumno..:"<<notamax<<"\n";
    cout<<"Estado de la nota ..:"<<estado<<"\n";
_flushall();
if (alumnomax<promedio)
{
    alumnomax=notamax;
    strcpy(nombremayor,nombre);
}
    _flushall();

    do
         {
               cout<<"Desea continuar ...:";
               cin.get(resp);
               _flushall();
         }while ((resp !='S') and  (resp !='N'));


         _flushall();
}while (resp !='N');
cout<<"Nombre del alumno con la mejor nota "<<nombremayor;
cout<<" Con la nota "<<alumnomax<<"\n";
    return 0;
}

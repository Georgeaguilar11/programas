#include <iostream>
#include <stdio.h>
using namespace std;
/*
ingresar un numero validar q sea par o divisible entre 5. debera de contar
cuantos son pares cuantos son 5. tiene q preguntar si desea continuar, validar que la respuesta
solo sea s o n. obtener el numero mayor de los numeros que se ingresan correctamente.
obtener el promedio de los numeros que fueron mayores a 100. desarrollar el programa usando
ciclo while , estructuras de condicion.
*/
int main()
{int numero,cpar=0,cdiv5=0,mayor=0,suma100=0,c100=0;
 double promay100;
 char resp;

 do
 {
     do
     {
         cout<<"Ingresar el numero..:";
         cin>>numero;

     }while (((numero%2)!=0) and ((numero%5)!=0));

     _flushall();

     do
     {

         cout<<"Desea continuar ...:";
         cin.get(resp);
         _flushall();

     }while ((resp !='S') and  (resp !='N'));

     if ((numero%2)==0)
     {
         cpar++;
     }
     if ((numero%5)==0)
     {
         cdiv5++;
     }
     if (numero>100)
     {
         c100++;
         suma100+=numero;
     }
     if (c100!=0)
     {
         promay100=suma100/c100;
     }
     else
     {
         promay100=0;
     }
     if (numero>mayor)
     {
         mayor=numero;
     }

 }while ((resp !='N'));
    cout<<"Cantidad de pares:"<<cpar<<"\n";
    cout<<"Cantidad de divisibles entre 5:"<<cdiv5<<"\n";
    cout<<"El numero mayor es:"<<mayor<<"\n";
    cout<<"El promedio de los numeros mayores a 100 son:"<<promay100<<"\n";
    return 0;
}

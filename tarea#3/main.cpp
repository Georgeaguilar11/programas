#include <iostream>
#include <stdio.h>
using namespace std;
/*
ingresar un numero comprendido entre 50-150 y tiene que ser par, validar el ingreso usando
do/while, luego preguntar si desea continuar usar una variable de tipo char para la respuesta y
esta deberá de ser validada para que solo responda S o N, al final presentar cual fue el
numero mayor y menor.
*/
int main()
{ char resp;
  int numero;

  //cout<<"Ingrese el numero..>";
  //if (((numero%2)==0) and ((numero>=50) and (numero<=150)))

  //{
  // cin>>numero;
  //}



   do
   {
      do
      {
          cout << "Ingrese un Numero: " ;
          cin >> numero ;
          _flushall();

      } while((numero<50) and (numero>150));

       cout<<"Desea continuar ...:";
        cin.get(resp);
        _flushall();

   } while ((resp !='n') and  (resp !='N'));


    return 0;
}

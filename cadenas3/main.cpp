#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//comparacion de cadenas
char nombre[5][30];
void ingresoCadenas(char nombre[5][30])
{   for (int i=0;i<5;i++)
    {
         cout<<"Ingresar el nombre : ";
         cin.getline(nombre[i],30);
    }

}
void compara(char nombre[5][30])
{ char cadcompa[30];
cout<<"Ingresar la cadena a comparar : ";
cin.getline(cadcompa,30);

for(int i =0;i<5;i++)
{
    if(strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
    {
        cout<<"Comparación correcta con "<<nombre[i]<<"\n";
    }
}
}
void comparar2(char nombre[5][30])
{char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i =0;i<5;i++)
    {
      if(strcmp(nombre[i],cadcompa)==0)
      {
          cout<<"Comparación correcta con "<<nombre[i]<<"\n";
      }
    }
}
int main()
{
    ingresoCadenas(nombre);
    compara(nombre);
    cout<<"----------------Comparar 2-------"<<"\n";
    comparar2(nombre);

    return 0;
}

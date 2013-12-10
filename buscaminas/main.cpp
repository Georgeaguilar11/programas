#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

char minas[5][5];
char formato[5][5];

void completacion(char minas[5][5], char formato[5][5])
{

    for(int i=0;i<5;i++)
    {

        for(int c=0;c<5;c++)
        {  int aux;

            formato[i][c]='*';

           aux = 1 + rand()%(10-1);
           if (aux%2==0)
           {
            minas[i][c]='X';
           }
           else
           {
               minas[i][c]='O';
           }
        }
    }
}


void presentar(char minas[5][5], char formato[5][5])
{

    for(int i=0;i<5;i++)
    {
        for(int c=0;c<5;c++)
        {
           cout<<formato[i][c]<<"      ";
        }cout<<"\n";
    }

}

void ingresar(char minas[5][5], char formato[5][5])
{ int col=0;
  int fila=0;
    int contadorX=10;
    int contadorO=0;

    do
    {
    cout<<"<"<<fila<<","<<col<<">"<<"\n";
        do
    {cout<<"Ingrese No. Fila: ";
    cin>>fila;
    }while(fila>5);


    do
    {cout<<"Ingrese No. De Columna: ";
    cin>>col;
    }while(col>5);


    formato[fila][col]=minas[fila][col];
    cout<<"\n";


    presentar(minas,formato);

    if((formato[fila][col])=='X')
        {
            contadorX--;
        }
    else
    {
          contadorO++;

    }


    }while(contadorX!=0);

    cout<<"\n";
    cout<<"Fin del Juego"<<"\n";
    cout<<"Usted a Obtenido "<<contadorO<<" Aciertos"<<"\n";


}

int main()
{   cout<<"Busca Minas"<<"\n";
    cout<<"\n";

    srand(time(0));
completacion(minas,formato);
presentar(minas,formato);
ingresar(minas,formato);


    return 0;
}

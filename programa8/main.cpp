#include <iostream>

using namespace std;
/*
se tiene que ingresar el nombre, la nota del alumno y el programa
debera de presentar la observacion usando la siguiente tabla:
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente

usar condiciones donde aplicamos el and.
*/
int main()
{char nombre[30];
int nota;

    cout << "ingresar nombre...>";
    cin.getline(nombre,30);

    cout<<"Ingresar la nota...>";
    cin>>nota;

    if ((nota>=0)and (nota<60))
    {
        cout<<"Reprobado"<<"\n";
    }
    else if ((nota>=60)and (nota<81))
    {
        cout<<"bueno"<<"\n";
    }
    else if ((nota>=80)and (nota<91))
    {
        cout<<"Muy bueno"<<"\n";
    }
    else if ((nota>=91)and (nota<=100))
    {
        cout<<"Sobresaliente"<<"\n";
    }
    else
    {
        cout<<"Nota incorrecta"<<"\n";
    }
    return 0;
}

#include <iostream>

using namespace std;
/*
elaborar un programa donde se declare la siguiente estructura
nombre,horas,hn,he,pn,pe,pb,ihss y tp.
se tiene que elaborar un procedimiento para ingresar los datos
al registro,luego debemos de calcular las hn,he,pn,pe,pb,ihss y tp
un procedimiento.(las horas normales son las  primeras 40 y las
                  demas extras)
si tiene que elaborar una funcion para determinar el seguro social
donde solo se ingrese el pago bruto que es parte de la estructura
y nos devuelva el ihss
*/
struct empleado
{
    char nombre[30];
    int horas,hn,he,pn,pe,pb,ihss,tp;
};
empleado emplx;
void ingreso(empleado &emplx)
{
    cout<<"Ingrese el nombre..:";
    cin.getline(emplx.nombre,30);
    cout<<"Ingrese las horas..:";
    cin>>horas;
}
void calcular(empleado &emplx)
{
    if (horas>40)
    {
        hn=40;
        he=horas-40;
    }
    else
    {
        hn=horas;
        he=0;
        he+hn=55;
        pb=0;
    }
}
int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}
int main()
{

    return 0;
}

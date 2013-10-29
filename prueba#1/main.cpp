#include <iostream>

using namespace std;
/*
ingresar el nombre del empleado, las horas trabajadas,
luego determinar las horas normales que son las primeras 40
y las extras que son las mayores a 40.
debera obtener pago por hora usando el turno, luego un bono,
el pago bruto que son la suma de los pagos normales y extras.
ihss y total a pagar

turno  pn  pe
1      100 130
2      135 140
3      140 150

bono si el empleado es de truno 1 y trabajo mas de 45 horas el
bono es de 300 y si no es de 100.

para calcular el seguro el pago bruto mayor a 7000 es 245 y
sino el pago bruto por 3.5%.
*/
int main()
{char nombre[30];
int horas,horase,horan,pn,pe,turno,bono,pb;
double ihss;

cout<<"Ingrese el nombre...>";
cin.getline(nombre,30);

cout<<"Ingrese las horas...>";
cin>>horas;

cout<<"Ingrese el turno...>";
cin>>turno;

if (horas>40)
{
    horase=horas-40;
    horan=40;
}
else
{
    horase=0;
    horan=horas;
}
if ((turno>0) and (turno<4))
{
    if (turno==1)
    {
        pn=horan*100;
        pe=horase*130;
    }
   else if (turno==2)
    {
        pn=horan*135;
        pe=horase*140;
    }
    else if (turno==3)
    {
        pn=horan*140;
        pe=horase*150;
    }
    else
    {
        pn=0;
        pe=0;
    }
}
if ((turno=1)and (horas>45))
{
    bono=300;
}
else
{
    bono=100;
}

pb=pn+pe+bono;

if (pb>7000)
{
    ihss=245;
}
else
{
    ihss = pb * 0.035;
}



cout<<"Horas extra son..:"<<horase<<"\n";
cout<<"Horas normal son..:"<<horan<<"\n";
cout<<"El pago normal es..:"<<pn<<"\n";
cout<<"El pago extra es..:"<<pe<<"\n";
cout<<"El bono es..:"<<bono<<"\n";
cout<<"El pago bruto es..:"<<pb<<"\n";
cout<<"El seguro es..:"<<ihss<<"\n";
    return 0;
}

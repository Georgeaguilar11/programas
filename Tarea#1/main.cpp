#include <iostream>

using namespace std;

int main()
{int dia,mes,year;

    cout << "Ingrese el dia...>";
    cin>>dia;

    cout << "Ingrese el mes...>";
    cin>>mes;

    cout << "Ingrese el year...>";
    cin>>year;

    if((year>0)and ((mes>0) and (mes<=12)))
    {
            if ((mes==1)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==2)and ((dia>=1)and (dia<=28)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==3)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==4)and ((dia>=1)and (dia<=30)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==5)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==6)and ((dia>=1)and (dia<=30)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==7)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==8)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==9)and ((dia>=1)and (dia<=30)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==10)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==11)and ((dia>=1)and (dia<=30)))
                     {
                         cout<<"correcto"<<"\n";
                     }


            else if ((mes==12)and ((dia>=1)and (dia<=31)))
                     {
                         cout<<"correcto"<<"\n";
                     }

        else
        {
            cout<<"incorrecto"<<"\n";
        }
    }
    else
    {
        cout<<"incorrecto"<<"\n";
    }
    return 0;
}

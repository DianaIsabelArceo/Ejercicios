#include <iostream>
using namespace std;

int main()
{
    int km, dias,total;
    cout << "¿Cual es la distancia que recorrera en su viaje (Km)?  ";
    cin>>km;
    cout << "¿Cuantos dias durara de estancia?  ";
    cin>>dias;

    if((km>800)&&(dias>7))
    {
        total=(km*0.17);
        total-=(total*0.30);
        cout<<"El precio del boleto es: "<<total<<endl;
    }
    else
    {
        total=km*0.17;
        cout<<"El precio del boleto es: "<<total<<endl;
    }


    return 0;
}

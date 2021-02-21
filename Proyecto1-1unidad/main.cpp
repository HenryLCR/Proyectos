#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion;

    cout<<"********* Game HLC ***********"<<endl;
    cout<<"******* Menu de Juego ********"<<endl;
    cout<<"******************************"<<endl;
    
    cout<<endl;
    cout<<"--Seleccione un Juego--"<<endl;
    cout<<"1 - StarShip"<<endl;
    cout<<"2 - Snake"<<endl;

    cout<<endl;
    cout<<"-Ingrese un numero del menu para seleccionar el juego: "; cin>>opcion;
    switch (opcion)
    {
        
    case 1: 
            system("cls");
            starShip();
        break;
    
    case 2:
            system("cls");
            snake();
        break;

    default: 
            cout<<"¡¡ Hasta Pronto !! ";
        break;
    }


    return 0;
}

#ifndef LIB1ENCABEZADOLARA_H_INCLUDED
#define LIB1ENCABEZADOLARA_H_INCLUDED

#include <iostream>
#include "Lib2ProgramaLara.h"
using namespace std;

void MenuLara();
void EncabezadoLara(){

    string arregloLara[5];
    arregloLara[0]="UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE";
    arregloLara[1]="Anderson Lenin Lara Chicaiza";
    arregloLara[2]="ITIN";
    arregloLara[3]="Segundo A";
    arregloLara[4]="Programacion orientada a Objetos";

    cout<<arregloLara[0]<<endl;
    cout<<arregloLara[1]<<endl;
    cout<<arregloLara[2]<<endl;
    cout<<arregloLara[3]<<endl;
    cout<<arregloLara[4]<<endl;
    cout<<"-----------------------------------------------"<<endl;
    MenuLara();
}

void MenuLara(){
    int menu;
    do{
    cout<<"------------------MENU-------------"<<endl;
    cout<<"1. Adivinar un numero del 1 al 100"<<endl;
    cout<<"2. Salir"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Escoja un item:"<<endl;
    cin>> menu;
    switch (menu){
    case 1:
        PrimoLara();
        break;
    case 2:
        cout<<"ADIOOOOOSS....."<<endl;
        break;
    default:
        cout<<"Item mal ingresado, intente de nuevo"<<endl;
        break;
    }
    }while (menu!=2);

}
#endif // LIB1ENCABEZADOLARA_H_INCLUDED

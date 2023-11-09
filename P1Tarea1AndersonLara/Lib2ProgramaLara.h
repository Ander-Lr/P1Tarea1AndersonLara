#ifndef LIB2PROGRAMALARA_H_INCLUDED
#define LIB2PROGRAMALARA_H_INCLUDED

#include <iostream>
bool esPrimoLara(int numero);

using namespace std;

bool esPrimoLara(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void PrimoLara() {
    int numero;

    cout << "Este programa verifica si un n�mero es primo o no." << endl;
    cout << "Introduce un n�mero entero positivo: ";
    cin >> numero;


    while(numero<0){
        cout<<"Error. Introduce SOLO un n�mero entero positivo: "<<endl;
        cin>>numero;
    }

    if (esPrimoLara(numero)) {
        cout << numero << " es un n�mero primo." << endl;
    } else {
        cout << numero << " no es un n�mero primo." << endl;
    }

}

#endif // LIB2PROGRAMALARA_H_INCLUDED

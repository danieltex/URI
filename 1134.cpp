#include <iostream>

using namespace std;

int main() {
    unsigned cod, alcool = 0, gasolina = 0, diesel = 0;
    do {
        do {
            cin >> cod;
        } while(cod > 4);
        switch(cod) {
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
        }
    } while (cod != 4);
    cout << "MUITO OBRIGADO" << endl
         << "Alcool: " << alcool << endl
         << "Gasolina: " << gasolina << endl
         << "Diesel: " << diesel << endl;
}
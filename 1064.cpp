#include <iostream>

using namespace std;

int main(void) {
    double valor;
    double soma_positivos = 0;
    int positivos = 0;
    for (int i = 0; i < 6; i++) {
        cin >> valor;
        if (valor > 0) {
            positivos++;
            soma_positivos += valor;
        }
    }

    cout << positivos << " valores positivos" << endl
         << soma_positivos / positivos << endl;

    return 0;
}
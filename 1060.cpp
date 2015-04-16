#include <iostream>

using namespace std;

int main(void) {
    double valor;
    int positivos = 0;
    for (int i = 0; i < 6; i++) {
        cin >> valor;
        if (valor > 0) positivos++;
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}
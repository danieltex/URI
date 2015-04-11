#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    double limite[] = {2000.0, 3000.0, 4500.0};
    int taxa[]      = {     8,     18,     28};

    double salario; cin >> salario;

    int i = sizeof(limite) / sizeof(*limite) - 1;
    while(limite[i] > salario) --i;

    double valor = salario;
    double imposto = 0;
    for(; i >= 0; --i)
    {
        imposto += (valor - limite[i]) * taxa[i];
        valor = limite[i];
    }

    cout << fixed << setprecision(2);
    if (imposto == 0) cout << "Isento" << endl;
    else cout << "R$ " << imposto / 100 <<  endl;

    return 0;
}
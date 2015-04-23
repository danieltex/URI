#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int linha;
    char operacao;
    cin >> linha >> operacao;
    double soma = 0;
    for (int i = 0; i < linha; i++) {
        double valor;
        for(int j = 0; j < 12; j++)
            cin >> valor;
    }
    for(int i = 0; i < 12; i++) {
        double valor;
        cin >> valor;
        soma += valor;
    }
    cout << fixed << setprecision(1);
    switch (operacao) {
        case 'M':
            cout << soma / 12 << endl;
            break;
        case 'S':
        default:
            cout << soma << endl;
    }
    return 0;
}
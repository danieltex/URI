#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    
    int coluna;
    char operacao;
    cin >> coluna >> operacao;
    
    double soma = 0;
    double matriz[12][12];
    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++)
            cin >> matriz[i][j];
    }
    for(int i = 0; i < 12; i++) {
        soma += matriz[i][coluna];
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
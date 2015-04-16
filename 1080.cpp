#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    unsigned valor, maior = 0;
    int i_maior;
    for (int i = 1; i <= 100; i++) {
        cin >> valor;
        if (valor > maior) {
            maior = valor;
            i_maior = i;
        }
    }
    cout << maior << endl << i_maior << endl;
    return 0;
}
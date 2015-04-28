#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

typedef vector< vector<unsigned> > Matriz;

void matriz_quadrada(unsigned n) {
    Matriz matriz(n, vector<unsigned>(n, 1));
    
    // loop da camada
    for (int i = 0; i < (n+1)/2; i++) {
        // valor da camada
        int v = i + 1;
        // linhas
        int superior = v - 1;
        int inferior = n - v;
        // colunas
        int esquerda = v - 1;
        int direita = n - v;
        for(int j = i; j < n - i; j++) {
            matriz[superior][j] = v;
            matriz[inferior][j] = v;
            matriz[j][esquerda] = v;
            matriz[j][direita] = v;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << "  " << matriz[i][0];
        for (int j = 1; j < n; j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(false);

    unsigned n;
    while (cin >> n && n) {
        matriz_quadrada(n);
    }
}
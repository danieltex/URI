#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

typedef vector< vector<unsigned> > Matriz;

void matriz_quadrada(unsigned n) {
    Matriz matriz(n, vector<unsigned>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = pow(2, i + j);
        }
    }
    int esp = to_string(matriz[n-1][n-1]).size() + 1;
    for (int i = 0; i < n; i++) {
        cout << setw(esp - 1) << matriz[i][0];
        for (int j = 1; j < n; j++) {
            cout << setw(esp) << matriz[i][j];
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
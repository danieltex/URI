#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

typedef vector< vector<unsigned> > Matriz;

void matriz_quadrada(unsigned n) {
    Matriz matriz(n, vector<unsigned>(n));
    
    int v = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = abs(j - i) + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << setw(3) << matriz[i][0];
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
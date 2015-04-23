#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n; cin >> n;
    int min, pos, valor;
    min = numeric_limits<int>::max();
    
    for (int i = 0; i < n; i++)
    {
        cin >> valor;
        if (valor < min) {
            min = valor;
            pos = i;
        }

    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
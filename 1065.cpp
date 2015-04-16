#include <iostream>

using namespace std;

int main(void) {
    int valor;
    int pares = 0;
    for (int i = 0; i < 5; i++) {
        cin >> valor;
        if (valor % 2 == 0) pares++;
    }

    cout << pares << " valores pares" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int lesmas;
    while (cin >> lesmas) {
        int maior = 0, velocidade;
        for (int i = 0; i < lesmas; i++) {
            cin >> velocidade;
            maior = max(maior, velocidade);
        }
        int nivel = min(maior / 10 + 1, 3);
        cout << nivel << endl;
    }
    return 0;
}
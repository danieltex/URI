#include <iostream>

using namespace std;

void perfeito() {
    unsigned x, soma = 0;
    cin >> x;
    for (int i = 1; i <= x / 2; i++)
        if (x % i == 0)
            soma += i;
    if (soma == x)
        cout << x << " eh perfeito" << endl;
    else
        cout << x << " nao eh perfeito" << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        perfeito();
    }
    return 0;
}
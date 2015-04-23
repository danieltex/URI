#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    while (n <= 0) cin >> n;
    // soma dos termos da pa (p - q + 1) * (Ap + Aq) / 2
    // n = (p - q + 1)
    // Ap = a
    // Aq = a + (n - 1)
    int soma = n * (2 * a + n - 1) /2;
    cout << soma << endl;

    return 0;
}
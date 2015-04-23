#include <iostream>
using namespace std;
int main() {
    int x, z;
    cin >> x >> z;
    while(x >= z) cin >> z;

    int soma = 0, i = 0;
    while (soma < z) {
        soma += x++;
        i++;
    }
    cout << i << endl;

    return 0;
}
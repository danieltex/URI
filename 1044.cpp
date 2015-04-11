#include <iostream>

bool sao_multiplos(int a, int b) {
    return a % b == 0 || b % a == 0;
}
using namespace std;
int main(void) {
    int a, b;
    cin >> a >> b;
    if (sao_multiplos(a, b))
        cout << "Sao  Multiplos";
    else
        cout << "Nao sao Multiplos";
    return 0;
}
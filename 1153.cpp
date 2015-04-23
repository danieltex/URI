#include <iostream>
using namespace std;
int main() {
    unsigned n, fatorial = 1;
    cin >> n;

    for (int i = n; i > 1; fatorial *= i, i--) ;

    cout << fatorial << endl;

    return 0;
}
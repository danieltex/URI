#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, p;
    int terreno;
    while(cin >> a && a) {
        cin >> b >> p;
        terreno = sqrt(a * b * 100.0 / p);
        cout << terreno << endl;
    }
    return 0;
}
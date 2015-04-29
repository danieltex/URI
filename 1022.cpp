#include <iostream>
#include <cmath>
using namespace std;
int mdc(int a, int b) {
    if (a < b) swap(a, b);
    while (int resto = a % b) {
        a = b; b = resto;
    }
    return b;    
}
int main() {
    unsigned n;
    int n1, d1, n2, d2, n3, d3;
    char op, d;
    cin >> n;
    while(n--) {
        cin >> n1 >> d >> d1 >> op >> n2 >> d >> d2;
        switch (op) {
            case '+':
                // Soma: (N1*D2 + N2*D1) / (D1*D2)
                n3 = n1 * d2 + n2 * d1;
                d3 = d1 * d2;
                break;
            case '-':
                // Subtração: (N1*D2 - N2*D1) / (D1*D2)
                d3 = d1 * d2;
                n3 = n1 * d2 - n2 * d1;
                break;
            case '*':
                // Multiplicação: (N1*N2) / (D1*D2)
                n3 = n1 * n2;
                d3 = d1 * d2;
                break;
            case '/':
                // Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
                n3 = n1 * d2;
                d3 = n2 * d1;
                break;
        }
        int divisor = mdc(abs(n3), abs(d3));
        if (d3 < 0) {
            n3 *= -1;
            d3 = abs(d3);
        }
        cout << n3 << '/' << d3 << " = " 
             << n3 / divisor << '/' << d3 / divisor << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;
int main(void) {
    double a, b, c;
    cin >> a >> b >> c;
    
    if (a < b) swap (a, b);
    if (a < c) swap (a, c);
    if (b < c) swap (b, c);

    // se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
    else {
        // se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
        if (a*a == b*b + c*c) cout << "TRIANGULO RETANGULO" << endl;
        // se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
        if (a*a > b*b + c*c) cout << "TRIANGULO OBTUSANGULO" << endl;
        // se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
        if (a*a < b*b + c*c) cout << "TRIANGULO ACUTANGULO" << endl;
        // se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
        if (a == b && a == c) cout << "TRIANGULO EQUILATERO" << endl;
        // se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
        else if (a==b || a==c || b==c) cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
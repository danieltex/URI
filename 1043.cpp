#include <iostream>
#include <iomanip>

using namespace std;

bool eh_triangulo(double a, double b, double c)
{
    bool eh_triangulo =
        (a + b > c) &&
        (a + c > b) &&
        (b + c > a);
    return eh_triangulo;
}

int main(void)
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);
    if(eh_triangulo(a, b, c)) {
        cout << "Perimetro = " << a + b + c;
    } else {
        cout << "Area = " << ((a + b) / 2) * c;
    }
    cout << endl;
    return 0;
}
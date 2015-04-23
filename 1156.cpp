#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double soma = 0;
    for (int i = 0, den = 1; i < 20; i++, den *= 2)
    {
        int num = i * 2 + 1;
        soma += double(num) / den;
    }
    cout << fixed << setprecision(2) 
         << soma
         << endl;

    return 0;
}
#include <iostream>
#include <iomanip>

#define rendimento 12.

using namespace std;

int main(void)
{
    int tempo, velocidade;
    cin >> tempo >> velocidade;

    double combustivel;
    combustivel = (tempo * velocidade) / rendimento;

    cout << fixed << setprecision(3) << combustivel << endl;

    return 0;
}
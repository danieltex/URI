#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;
    
    int cod, qtde;
    double preco, valor_total = 0;

    for(int i = 0; i < 2; i++)
    {
        cin >> cod >> qtde >> preco;
        valor_total += qtde * preco;
    }

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2)
         << valor_total << endl;

    return 0;
}
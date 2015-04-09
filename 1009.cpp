#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;
    
    char nome[20];
    double comissao = 0.15;
    double salario, vendas, montante;

    cin >> nome >> salario >> vendas;
    montante = salario + vendas * comissao;

    cout << "TOTAL = R$ " << fixed << setprecision(2)
         << montante << endl;

    return 0;
}
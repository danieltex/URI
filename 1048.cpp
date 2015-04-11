#include <iostream>
#include <iomanip>
#include <cfloat>

int main(void)
{
    using namespace std;
    
    double teto[]  = {400.0, 800.0, 1200.0, 2000.0, DBL_MAX};
    int correcao[] = {   15,    12,     10,      7,       4};

    double salario;
    cin >> salario;

    int i;
    for (i = 0; i < 5; i++)
        if (salario <= teto[i]) break;

    double reajuste = (salario * correcao[i]) * 0.01;
    double novo_salario = salario + reajuste;

    cout << fixed << setprecision(2)
         << "Novo salario: " << novo_salario << endl
         << "Reajuste ganho: " << reajuste << endl
         << "Em percentual: " << correcao[i] << " %" << endl;
    return 0;
}
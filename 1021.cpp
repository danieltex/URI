#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    const int nota[] = {
        10000, 5000, 2000, 1000, 500, 200,
        100, 50, 25, 10, 5, 1
    };
    int len_nota = sizeof(nota) / sizeof(*nota);
    int troco[len_nota];

    double valor;
    cin >> valor;
    
    long resto = int(valor * 100);

    for(int i = 0; i < len_nota; i++)
    {
        long novo_resto = resto % nota[i];
        troco[i] = (resto - novo_resto) / nota[i];
        resto = novo_resto;
    }

    cout << fixed << setprecision(2)
         << "NOTAS:\n";
    for(int i = 0; i < len_nota; i++)
    {
        if(nota[i] == 100) {
            cout << "MOEDAS:\n";
        }
        cout << troco[i];
        if(nota[i] <= 100) {
            cout << " moeda(s) de R$ ";
        }
        else {
            cout << " nota(s) de R$ ";
        }
        cout << nota[i] / 100. << endl;
    }


    return 0;
}
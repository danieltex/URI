#include <iostream>

using namespace std;

int main(void)
{
    int nota[] = {100, 50, 20, 10, 5, 2, 1};
    int troco[] = {  0,  0,  0,  0, 0, 0, 0};
    int valor;
    cin >> valor;
    
    int resto = valor;

    for(int i = 0; i < 7; i++)
    {
        int novo_resto = resto % nota[i];
        troco[i] = (resto - novo_resto) / nota[i];
        resto = novo_resto;
    }

    cout << valor << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << troco[i] << " nota(s) de R$ "
             << nota[i] << ",00" << endl;
    }


    return 0;
}
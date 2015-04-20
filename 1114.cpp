#include <iostream>
#include <string>
using namespace std;

int main() {
    string senha;
    for (cin >> senha; senha != "2002"; cin >> senha)
        cout << "Senha Invalida\n";
    cout << "Acesso Permitido" << endl;
}
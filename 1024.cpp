#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int casos; cin >> casos;
    string linha;
    cin.ignore(256, '\n');
    for (int i = 0; i < casos; i++) {
        getline(cin, linha);

        // 1º - caracteres alpha + 3
        for (char &c : linha)
            if (isalpha(c))
                c += 3;
        // 2º - inverter linha
        reverse(linha.begin(), linha.end());

        // 3º - caractere -1 da metade em diante
        for (int i = linha.size() / 2; i < linha.size(); i++)
            linha[i] -= 1;
        cout << linha << endl;
    }
    return 0;
}
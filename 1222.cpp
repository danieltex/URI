#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int num_palavras, max_linhas_pagina, max_chars_linha;
    while (cin >> num_palavras >> max_linhas_pagina >> max_chars_linha) {
        string palavra;
        cin >> palavra;
        int chars_linha = palavra.size();
        int linhas = 1;
        for (int i = 1; i < num_palavras; i++)
        {
            cin >> palavra;
            int tam = palavra.size();
            if (chars_linha + tam + 1 <= max_chars_linha) {
                chars_linha += tam + 1;
            }
            else {
                // cout << "chars: " << chars_linha << endl;
                chars_linha = tam;
                linhas++;
                // cout << "linhas: " << linhas << endl;
            }
        }

        cout << ceil(double(linhas) / max_linhas_pagina) << endl;
    }

    return 0;
}
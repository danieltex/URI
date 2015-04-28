#include <iostream>
#include <string>
using namespace std;

void postfix(const string& prefix, const string& infix) {
    if (prefix.size() <= 1) {
        cout << prefix;
    } else {
        char no = prefix[0];
        int posicao_no = infix.find(no);
        // pega o primeiro da prefix e divide a infix
        string i_direita = infix.substr(0, posicao_no);
        string i_esquerda = infix.substr(posicao_no + 1);
        // pega o restante da prefix e dá match com lado esquerdo ou direito da infix
        string p_direita, p_esquerda;
        for (char c : prefix) {
            if (i_direita.find(c) != string::npos) p_direita += c;
            if (i_esquerda.find(c) != string::npos) p_esquerda += c;
        }
        postfix(p_direita, i_direita);
        postfix(p_esquerda, i_esquerda);
        cout << no;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    string prefix, infix;
    while(cin >> prefix >> infix) {
        postfix(prefix, infix);
        cout << endl;
    }

    return 0;
}
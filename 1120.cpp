#include <string>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    char falho;
    string valor;
    while(cin >> falho >> valor && falho != '0' && valor != "0") {
        string contrato;
        // string contrato("0");
        for(char c : valor)
            if (c != falho)
                contrato += c;

        int i = 0;
        while(contrato[i] == '0' && i < contrato.size()) i++;
        if (i == contrato.size()) {
            cout << 0;
        }
        else {
            for(int j = i; j < contrato.size(); j++)
                cout << contrato[j];
        }
        cout << endl;
    }
    return 0;
}
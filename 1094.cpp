#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    
    unsigned n;
    unsigned qtde;
    char tipo;
    
    unsigned coelhos = 0;
    unsigned ratos = 0;
    unsigned sapos = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> qtde >> tipo;
        switch (tipo) {
            case 'C': coelhos += qtde; break;
            case 'S': sapos += qtde; break;
            case 'R': ratos += qtde; break;
        }
    }
    unsigned total = coelhos + sapos + ratos;
    cout << fixed << setprecision(2)
         << "Total: " << total << " cobaias\n"
         << "Total de coelhos: " << coelhos << "\n"
         << "Total de ratos: " << ratos << "\n"
         << "Total de sapos: " << sapos << "\n"
         << "Percentual de coelhos: " << 100.0 * coelhos / total << " %\n"
         << "Percentual de ratos: " << 100.0 * ratos / total << " %\n"
         << "Percentual de sapos: " << 100.0 * sapos / total << " %\n"
         << flush;
    return 0;
}
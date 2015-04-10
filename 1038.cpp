#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(void) {
    double tabela[] = {
        4.0,
        4.5,
        5.0,
        2.0,
        1.5,
    };
 
    int codigo, qtde;
    cin >> codigo >> qtde;
    cout << fixed << setprecision(2)
         << "Total: R$ "
         << tabela[codigo - 1] * qtde
         << endl;
 
    return 0;
}
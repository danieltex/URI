#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int idade, i = 0;
    double soma = 0;
    
    while(cin >> idade && idade > 0) {
        i++;
        soma += idade;
    }

    cout << fixed << setprecision(2) 
         << soma / i
         << endl;

    return 0;
}
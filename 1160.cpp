#include <iostream>
#include <cmath>
using namespace std;

void crescimento() {
    int pA, pB;
    double cA, cB;
    cin >> pA >> pB >> cA >> cB;

    int i = 0;
    while (pA <= pB && i < 101) {
        pA *= (100+cA)/100; pB *= (100+cB)/100;
        i++;

    }
    if (i <= 100) 
        cout << i << " anos." << endl;
    else
        cout << "Mais de 1 seculo." << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        crescimento();
    }
    return 0;
}
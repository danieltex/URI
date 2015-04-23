#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    while(cin >> n && n) {
        int x = n + abs(n % 2);
        int soma = 0;
        for (int i = x; i < x + 10; i += 2)
            soma += i;
        cout << soma << endl;
    }
    return 0;
}
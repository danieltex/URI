#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0) x++;
        int soma = 0;
        for (int j = x; j < x + y*2; j += 2)
            soma += j;
        cout << soma << endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    unsigned n;
    do {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
        if (n) cout << endl;
    } while (n);
    return 0;
}
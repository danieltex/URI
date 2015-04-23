#include <iostream>

using namespace std;

int main() {
    unsigned n;
    while (cin >> n && n) {
        unsigned i;
        for (i = 1; i < n; i++)
            cout << i << ' ';
        cout << i << endl;
    }
    return 0;
}
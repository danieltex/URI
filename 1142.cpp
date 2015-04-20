#include <iostream>

using namespace std;

int main() {
    unsigned n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1 + i * 4; j < i * 4 + 4; j++)
            cout << j << " ";
        cout << "PUM\n";
    }
    cout << flush;
    return 0;
}
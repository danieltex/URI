#include <iostream>

using namespace std;

int main() {
    unsigned n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " " << i * i << " " << i * i * i << "\n";
    }
    cout << flush;
    return 0;
}
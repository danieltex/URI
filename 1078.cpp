#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    unsigned n;
    cin >> n;
    for (unsigned i = 1; i <= 10; i++)
        cout << i << " x " << n << " = " << i * n << endl;
    return 0;
}
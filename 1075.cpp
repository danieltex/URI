#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    unsigned n;
    cin >> n;
    for (unsigned i = 2; i < 10000; i++)
        if (i % n == 2) cout << i << endl;
    return 0;
}
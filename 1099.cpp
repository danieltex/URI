#include <iostream>
using namespace std;

int main() {
    unsigned n, x, y;
    cin >> n;
    for (unsigned i = 0; i < n; i++)
    {
        cin >> x >>y;
        if (x > y) swap(x,y);
        unsigned soma = 0;
        for (unsigned j = x + 1; j < y; j++)
        {
            if (j % 2 == 1) soma += j;
        }
        cout << soma << '\n';
    }
    cout << flush;
    return 0;
}
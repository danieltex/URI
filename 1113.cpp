#include <iostream>
using namespace std;

int main() {
    unsigned x, y;
    for (cin >> x >> y; x != y; cin >> x >> y)
    {
        if (x < y) cout << "Crescente\n";
        else       cout << "Decrescente\n";
    }
    cout << flush;
}
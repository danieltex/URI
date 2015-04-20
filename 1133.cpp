#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) std::swap(x, y);
    for (int i = x+1; i < y; i++) {
        int resto = i % 5;
        if (resto == 2 || resto == 3) cout << i << endl;
    }
    return 0;
}
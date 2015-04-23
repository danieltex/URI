#include <iostream>

using namespace std;

int main() {
    unsigned n;
    cin >> n;

    int i = 0, j = 1, c = 1;
    cout << i;
    while (c < n) {
        c++;
        i += j;
        swap(i, j);
        cout << ' ' << i;
    }
    cout << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
    int x;
    cin >> x;
    for (int i = 0; i <= x; i++)
        if (i % 2 != 0) cout << i << endl;
    return 0;
}
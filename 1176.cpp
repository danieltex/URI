#include <iostream>

using namespace std;

void fib(int x) {
    unsigned long i = 0, j = 1;
    for (int c = 0; c < x; c++) {
        i += j;
        swap(i, j);
    }
    cout << "Fib(" << x << ") = " << i << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x; cin >> x;
        fib(x);
    }
    return 0;
}
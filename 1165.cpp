#include <iostream>
#include <cmath>
using namespace std;

void primo() {
    unsigned x;
    cin >> x;
    double limite = sqrt(x);
    for (int i = 2; i <= limite; i++) {
        if (x % i == 0) {
            cout << x << " nao eh primo" << endl;
            return;
        }
    }
    cout << x << " eh primo" << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        primo();
    }
    return 0;
}
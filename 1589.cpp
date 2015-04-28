#include <iostream>
using namespace std;

int main() {
    int r1, r2, t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }
    return 0;
}
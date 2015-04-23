#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double A;
    for (int i = 0; i < 100; i++) {
        cin >> A;
        if (A <= 10)
            cout << "A[" << i << "] = " << A << endl;
    }
    return 0;
}
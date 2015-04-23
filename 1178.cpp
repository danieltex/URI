#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N; cin >> N;
    cout << fixed << setprecision(4);
    for (int i = 0; i < 100; i++, N /= 2) {
        cout << "N[" << i << "] = " << N << endl;
    }
    return 0;
}
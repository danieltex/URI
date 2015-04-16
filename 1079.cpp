#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    unsigned n;
    float a, b, c;
    cin >> n;
    cout << fixed << setprecision(1);
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        cout << (a * 2 + b * 3 + c * 5) / 10 << "\n";
    }
    cout << flush;
    return 0;
}
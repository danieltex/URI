#include <iostream>
using namespace std;

int main() {
    int x, y;
    for (cin >> x >> y; x > 0 && y > 0; cin >> x >> y)
    {
        if (x > y) swap(x, y);
        int soma = 0;
        for (int i = x; i <= y; i++)
        {
            soma += i;
            cout << i << " ";
        }
        cout << "Sum=" << soma << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    for (double i = 0; i <= 2; i += 0.2)
        for (double j = 1 + i; j <= 3 + i; j++)
            cout << "I="<< i << " J=" << j << endl;
    return 0;
}
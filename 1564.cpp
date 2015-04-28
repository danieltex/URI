#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if (!n)
            cout << "vai ter copa!" << endl;
        else
            cout << "vai ter duas!" << endl;
    }
    return 0;
}
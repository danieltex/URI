#include <iostream>
#include <map>
#include <string>
using namespace std;

const int led_cost [] = {
    6, // 0
    2, // 1
    5, // 2
    5, // 3
    4, // 4
    5, // 5
    6, // 6
    3, // 7
    7, // 8
    6  // 9
};

int main() {
    ios_base::sync_with_stdio(false);
    int casos; cin >> casos;
    for (int i = 0; i < casos; i++) {
        string numero; cin >> numero;
        long long unsigned leds = 0;
        for (char c : numero)
            leds += led_cost[c - '0'];
        cout << leds << " leds" << endl;
    }
    return 0;
}
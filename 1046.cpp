#include <iostream>

int main(void)
{
    using namespace std;
    int a, b, tempo;
    cin >> a >> b;

    if (a >= b)
        tempo = 24 - a + b;
    else
        tempo = b - a;

    cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    return 0;
}
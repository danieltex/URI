#include <iostream>

using namespace std;

int main(void)
{

    int N, h, m, s;
    cin >> N;

    h = N / 3600;
    m = (N / 60) % 60;
    s = N % 60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
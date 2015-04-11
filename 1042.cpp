#include <iostream>

void swap(int& a, int& b)
{
    int swap = a;
    a = b;
    b = swap;
}

int main(void)
{
    using namespace std;
    
    int a, b, c, d, e, f;
    cin >> a >> b >> c;
    d = a, e = b, f = c;

    if (a > b) swap (a, b);
    if (a > c) swap (a, c);
    if (b > c) swap (b, c);

    cout << a << endl
         << b << endl 
         << c << endl << endl;

    cout << d << endl
         << e << endl 
         << f << endl;

    return 0;
}
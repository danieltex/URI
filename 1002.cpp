#include <iostream>
#include <iomanip>

#define pi 3.14159

int main(void)
{
    using namespace std;

    double raio;
    cin >> raio;

    double area = pi * raio * raio;
    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;
}
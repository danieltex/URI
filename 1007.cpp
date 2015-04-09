#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;
    int A, B, C, D, DIF;
    cin >> A >> B >> C >> D;
    DIF = A * B - C * D;
    cout << "DIFERENÇA = " <<  DIF << endl;

    return 0;
}
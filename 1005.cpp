#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;

    double A, B, MEDIA;
    cin >> A >> B;
    MEDIA = (A * 3.5 + B * 7.5) / 11;
    cout << "MEDIA = " << fixed << setprecision(5)
         <<  MEDIA << endl;

    return 0;
}
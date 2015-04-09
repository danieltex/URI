#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;
    int pesoA = 2, pesoB = 3, pesoC = 5;
    double A, B, C, MEDIA;
    cin >> A >> B >> C;
    MEDIA = (A * pesoA + B * pesoB + C * pesoC) / 
        (pesoA + pesoB + pesoC);
    cout << "MEDIA = " << fixed << setprecision(1)
         <<  MEDIA << endl;

    return 0;
}
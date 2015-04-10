#include <iostream>
#include <iomanip>
#include <cmath>

#define pi 3.14159

using namespace std;

int main(void) {
 	double raio, volume;
 	cin >> raio;
 	volume = (4.0 / 3) * pi * pow(raio, 3);
 	cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
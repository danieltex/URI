#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
 	double A, B, C, delta;

 	cin >> A >> B >> C;

 	delta = B * B - 4 * A * C;
 	if (delta < 0 || A == 0.0) {
 		cout << "Impossivel calcular" << endl;
 	} else {
 		double R1, R2;
 		R1 = (-B + sqrt(delta)) / (2 * A);
 		R2 = (-B - sqrt(delta)) / (2 * A);

 		cout << fixed << setprecision(5)
 		     << "R1 = " << R1 << endl
 		     << "R2 = " << R2 << endl;
 	} 	
    return 0;
}
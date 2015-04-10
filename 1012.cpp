#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

using namespace std;

int main(void) {
 	double A, B, C;
 	cin >> A >> B >> C;

 	cout << fixed << setprecision(3);
 	// a) a área do triângulo retângulo que tem A por base e C por altura.
 	cout << "TRIANGULO: " << (A * C) / 2 << endl;

	// b) a área do círculo de raio C. (pi = 3.14159)
 	cout << "CIRCULO: " << PI * pow(C, 2) << endl;

	// c) a área do trapézio que tem A e B por bases e C por altura.
	cout << "TRAPEZIO: " << ((A + B) / 2) * C << endl;

	// d) a área do quadrado que tem lado B.
	cout << "QUADRADO: " << B * B << endl;

	// e) a área do retângulo que tem lados A e B. 
 	cout << "RETANGULO: " << A * B << endl;
 	
    return 0;
}
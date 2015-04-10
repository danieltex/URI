#include <iostream>
#include <iomanip>

using namespace std;

int maiorAB(int A, int B)
{
	return (A + B + abs(A - B)) / 2;
}

int main(void) {
 	int X; // distância
 	double Y; // consumo

 	cin >> X >> Y;
 	cout << fixed << setprecision(3);
 	cout << X / Y << " km/l" << endl;
 	
    return 0;
}
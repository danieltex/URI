#include <iostream>

using namespace std;

int main(void) {
	double x, y;
	cin >> x >> y;

	int i, j;
	
	if      (x < 0) i = 0;
	else if (x > 0) i = 2;
	else            i = 1;

	if      (y < 0) j = 0;
	else if (y > 0) j = 2;
	else            j = 1;


	char* cart[3][3] = {
		{"Q3",     "Eixo X", "Q2"    },
		{"Eixo Y", "Origem", "Eixo Y"},
		{"Q4",     "Eixo X", "Q1"    },
	};

	cout << cart[i][j] << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main() {

	string quadrante[][2] = {
		{"terceiro", "segundo"},
		{"quarto", "primeiro"}
	};

	int x, y;
	while (cin >> x >> y, x && y)
	{
		if ( x < 0) x = 0;
		else        x = 1;
		if (y < 0)	y = 0;
		else        y = 1;
		cout << quadrante[x][y] << endl;
	}
	return 0;
}
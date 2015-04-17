#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << fixed << setprecision(1);
	for (int i = 0; i < n; i++)
	{
		double x, y;
		cin >> x >> y;
		if (y == 0) cout << "divisao impossivel" << endl;
		else        cout << x / y << endl;
	}
	return 0;
}
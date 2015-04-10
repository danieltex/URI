#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
	double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d;
}

int main(void) {
 	double x1, y1, x2, y2;

 	cin >> x1 >> y1 >> x2 >> y2;
 	cout << fixed << setprecision(4);
 	cout << dist(x1, y1, x2, y2) << endl;
 	
    return 0;
}
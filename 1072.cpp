#include <iostream>

#define inicio 10
#define fim 20

using namespace std;

int main(void) {
	int n, x, in = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if (x >= inicio && x <= fim) 
			in++;
	}

	cout << in << " in\n" 
	     << (n - in) << " out" << endl;

	return 0;
}
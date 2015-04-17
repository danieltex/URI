#include <iostream>

using namespace std;

int main(void) {
	int n, x;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> x;
		if (!x)	cout << "NULL";
		else if (x % 2 == 0) cout << "EVEN ";
		else cout << "ODD ";
		if (x < 0) cout << "NEGATIVE";
		else if(x > 0) cout << "POSITIVE";
		cout << endl;
	}

	return 0;
}
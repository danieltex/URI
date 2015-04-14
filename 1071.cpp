#include <iostream>

using namespace std;

int main(void) {
	int a, b, soma = 0;
	cin >> a >> b;
	if ( a > b) swap(a, b);

	for(int i = a + 1; i < b; i++)
		if (i % 2 != 0) soma += i;

	cout << soma << endl;

	return 0;
}
#include <iostream>

using namespace std;

int main(void) {
	unsigned x;
	cin >> x;
	x += (x+1) % 2; // próximo impar ou o próprio x

	for (unsigned i = x; x < (12 + i); x += 2)
		cout << x << endl;

	return 0;
}
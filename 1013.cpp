#include <iostream>

using namespace std;

int maiorAB(int A, int B)
{
	return (A + B + abs(A - B)) / 2;
}

int main(void) {
 	int A, B, C;
 	cin >> A >> B >> C;

 	int maior = maiorAB(maiorAB(A, B), C);
 	cout << maior << " eh o maior" << endl;
 	
    return 0;
}
#include <iostream>

using namespace std;

int main(void) {
	int intervalos[] = {0, 25, 50, 75, 100};
	double valor;
	cin >> valor;
	if (valor < 0 || valor > 100)
		cout << "Fora de intervalo" << endl;
	else {
		for (int i = 0; i < 4; i ++) {
			if ((intervalos[i] < valor || (i == 0 && intervalos[i] == valor))
				&& intervalos[i + 1] >= valor) {
				cout << "Intervalo ";
				if(i == 0) cout << "[";
				else cout << "(";
				cout << intervalos[i] << "," << intervalos[i + 1] << "]"
				     << endl;
			     break;
			}
		}
	}
}
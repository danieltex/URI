#include <iostream>
#include <iomanip>

using namespace std;

void media() {
	double nota, media;
	unsigned short qtde = 0;
	while( qtde < 2)
	{
		cin >> nota;
		if (nota < 0 || nota > 10) 
			cout << "nota invalida" << endl;
		else {
			media += nota;
			qtde++;
		}
	}
	cout << "media = " << media / 2 << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(2);
	int novo_calculo = 1;
	do {
		media();
		do {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> novo_calculo;
		} while( novo_calculo < 1 || novo_calculo > 2);

	} while (novo_calculo != 2);

	return 0;
}
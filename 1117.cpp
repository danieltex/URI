#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double nota, media;
	unsigned short qtde = 0;
	
	cout << fixed << setprecision(2);
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
	return 0;
}
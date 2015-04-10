#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	double n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;

	double nota = n1 * 2 + n2 * 3 + n3 * 4 + n4;
	double media = nota / (2 + 3 + 4 + 1);

	cout << "Media: " << fixed << setprecision(1) << media << endl;

	if (media >= 7.0)
		cout << "Aluno aprovado." << endl;
	else if (media < 5.0)
		cout << "Aluno reprovado." << endl;
	else {
		cout << "Aluno em exame." << endl;
		double nota_exame, media_final;
		cin >> nota_exame;
		cout << "Nota do exame: " << nota_exame << endl;
		media_final = (media + nota_exame) / 2;
		if (media_final < 5.0)
			cout << "Aluno reprovado." << endl;
		else
			cout << "Aluno aprovado." << endl;
		cout << "Media final: " << media_final << endl;
	}

	return 0;
}
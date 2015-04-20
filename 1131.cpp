/**
O arquivo de entrada contém 2 valores inteiros, correspondentes aos 
gols marcados pelo Inter e pelo Grêmio respectivamente. 
Em seguida haverá um inteiro (1 ou 2), correspondente à repetição 
do programa.
*/

#include <iostream>
using namespace std;

int main() {
    int novo_grenal = 1;
    int grenais = 0;
    int total_inter = 0;
    int total_gremio = 0;
    int total_empates = 0;
    do {
        int inter, gremio;
        cin >> inter >> gremio;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> novo_grenal;
        grenais++;
        if (inter > gremio) total_inter++;
        else if (inter < gremio) total_gremio++;
        else total_empates++;
    } while (novo_grenal != 2);
    cout << grenais << " grenais" << endl;
    cout << "Inter:" << total_inter << endl;
    cout << "Gremio:" << total_gremio << endl;
    cout << "Empates:" << total_empates << endl;
    if (total_inter == total_gremio)
        cout << "Nao houve vencedor" << endl;
    else if (total_inter > total_gremio)
        cout << "Inter venceu mais" << endl;
    else
        cout << "Gremio venceu mais" << endl;
    return 0;
}
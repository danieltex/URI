#include <iostream>

using namespace std;

bool aceito(int A, int B, int C, int D)
{
    // se B for maior do que C e 
    if (! (B > C)) return false;

    // e se D for maior do que A
    if (! (D > A)) return false;

    // e a soma de C com D for maior que a soma de A e B e 
    if (! ((C + D) > (A + B))) return false;

    // e se C e D, ambos, forem positivos e 
    if (!((C > 0) && (D > 0))) return false;

    // se a variável A for par 
    if (! (A % 2 == 0)) return false;

    return true;

}
int main(void)
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool aceitacao = aceito(A,B,C,D);

    if (aceitacao)
        cout << "Valores aceitos";
    else
        cout << "Valores nao aceitos";
    cout << endl;
    return 0;
}
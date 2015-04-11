#include <iostream>

int main(void)
{
    using namespace std;
    
    // tempo em horas e minutos
    int ah, am, bh, bm;
    cin >> ah >> am >> bh >> bm;
    
    // conversão para tempo em minutos
    int a = ah * 60 + am;
    int b = bh * 60 + bm;
    
    // cáculo da diferença em minutos
    int tempo;
    if (a >= b)
        tempo = 24 * 60 - a + b;
    else
        tempo = b - a;

    // impressao em horas e minutos
    cout << "O JOGO DUROU " << tempo / 60 
         << " HORA(S) E "   << tempo % 60 << " MINUTO(S)" 
         << endl;

    return 0;
}
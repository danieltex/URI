#include <iostream>

using namespace std;

long readDateSecs() {
    char ignora[3];
    int dias, horas, minutos, segundos;
    cin >> ignora >> dias;
    cin >> horas >> ignora 
        >> minutos >> ignora 
        >> segundos;
    long secs = dias * 24;
    secs = (secs +  horas) * 60;
    secs = (secs + minutos) * 60;
    secs = secs + segundos;
    return secs;
}

long dias(long secs) {
    return secs / (24 * 60 * 60);
}

long horas(long secs) {
    return (secs / (60 * 60)) % 24;
}

long minutos(long secs) {
    return (secs / 60) % 60;
}

long segundos (long secs) {
    return secs % 60;
}

int main(void) {
    long dateA = readDateSecs();
    long dateB = readDateSecs();
    long delta = dateB - dateA;
    cout << dias(delta) << " dia(s)\n"
         << horas(delta) << " hora(s)\n"
         << minutos(delta) << " minuto(s)\n"
         << segundos(delta) << " segundo(s)" << endl;

    return 0;
}
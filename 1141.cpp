#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int tam;
    while(cin >> tam && tam) {
        set<string> seq;
        string anterior, atual;
        for (int i = 0; i < tam; i++) {
            cin >> atual;
            if (atual.find(anterior) != string::npos) {
                seq.insert(atual);
                seq.insert(anterior);
            }
            anterior.swap(atual);
        }
        cout << seq.size() << endl;
    }
    return 0;
}
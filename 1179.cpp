#include <iostream>
#include <string>
using namespace std;

void print_array(string nome, int* array, int n)
{
    for(int j = 0; j < n; j++)
        cout << nome << '[' << j << "] = " << array[j] << endl;
}

int main() {
    int N;
    int par = 0, impar = 0;
    int par_v[5], impar_v[5];
    for (int i = 0; i < 15; i++) {
        cin >> N;
        if (N % 2 == 0) {
            par_v[par] = N;
            par++;
            if (par > 4) {
                print_array("par", par_v, 5);
                par = 0;
            }
        } else {
            impar_v[impar] = N;
            impar++;
            if (impar > 4) {
                print_array("impar", impar_v, 5);
                impar = 0;
            }
        }
    }
    if (impar) print_array("impar", impar_v, impar);
    if (par) print_array("par", par_v, par);
    return 0;
}
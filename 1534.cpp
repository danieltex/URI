#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void matriz123(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int valor;
            if(i != j)
                valor = 3;
            else
                valor = 1;
            if(i == n - 1 - j) 
                valor = 2;
            cout << valor;
        }
        cout << endl;
    }
}

int main(void)
{
    string line;
    while(getline(cin, line), !line.empty())
    {
        int n;
        istringstream linestream(line);
        linestream >> n;
        matriz123(n);
    }
    return 0;
}
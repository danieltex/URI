#include <iostream>
#include <iomanip>
#include <cmath>

int main(void)
{
    using namespace std;
    
    int casos;
    cin >> casos;    
    for(int i = 0; i < casos; i++)
    {
        long long a1, a2, c1, c2;
        cin >> a1 >> c1 >> a2 >> c2;
        
        long long crescimento = (c2 - c1)* 100  / (a2 - a1);
        cout << crescimento / 100 << "," << setfill('0') << setw(2) << abs(crescimento % 100) << endl;
    }
    return 0;
}
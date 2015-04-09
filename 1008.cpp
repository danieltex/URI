#include <iostream>
#include <iomanip>

int main(void)
{
    using namespace std;
    
    int NUMBER, HOURS;
    double VALUE;

    cin >> NUMBER >> HOURS >> VALUE;
    
    cout << "NUMBER = " <<  NUMBER << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2)
         << HOURS * VALUE
         << endl;

    return 0;
}
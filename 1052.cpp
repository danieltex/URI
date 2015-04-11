#include <iostream>

const char* nome_mes[] =
{
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

int main()
{
    using namespace std;
    int mes;
    cin >> mes;
    cout << nome_mes[mes - 1] << endl;
    return 0;
}
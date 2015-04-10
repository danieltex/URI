#include <iostream>

#define VX 60
#define VY 90

using namespace std;

int main(void) {
 	double X;

 	cin >> X;

 	int tempo =  X * 60 / (VY - VX) ;
 	cout << tempo << " minutos" << endl;
 	
    return 0;
}
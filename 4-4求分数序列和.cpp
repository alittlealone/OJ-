/**
** I want to be one of the greats.
**/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	double m = 1; 
	double z = 2;
	double sum = 2;
	double temp;
	cin >> n;
	for(int i = 1; i < n; i++) {
		temp = m + z;
		m = z;
		z = temp;
		sum += z / m;
	} 
	cout << fixed << setprecision(4) << sum << endl;
	return 0;
}
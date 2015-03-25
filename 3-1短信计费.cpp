#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;

int main() {
	int k;
	cin >> k;
	double n;
	double sum = 0;
	for(int i = 0; i < k; i++) {
		cin >> n;
		sum = sum + 0.1 * ceil(n / 70);
	}
	cout << fixed << setprecision(1) << sum << endl;
	return 0;
}
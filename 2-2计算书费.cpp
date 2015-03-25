#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int k;
	double a[10], sum;
	cin >> k;
	for(int i = 0; i < k; i++) {
		for(int j = 0; j <10; j++) {
			cin >> a[j];
		}
		sum = 28.9 * a[0] + 32.7 * a[1] + 45.6 * a[2] + 78 * a[3] + 35 * a[4] + 86.2 * a[5] + 27.8 * a[6] + 43 * a[7] + 56 * a[8] + 65 * a[9];
		cout << fixed << setprecision(2) << sum << endl;
	}
	return 0;
}
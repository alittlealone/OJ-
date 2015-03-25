#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int k, n, sum;
	cin >> k;
	sum = 0;
	for(int i = 0; i < k; i++) {
		cin >> n;
		sum = sum + n;
	}
	cout << fixed << setprecision(2) << double(sum) / k << endl;
	return 0;
}
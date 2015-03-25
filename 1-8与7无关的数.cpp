#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, p, q, sum;
	sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		p = i % 10;
		q = i / 10;
		if(i % 7 != 0 && p != 7 && q != 7) {
			sum = sum + pow(i, 2);
		}
	}
	cout << sum << endl;
	return 0;
} 
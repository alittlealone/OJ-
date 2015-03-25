#include <iostream>
using namespace std;

int main() {
	int m, n, p, q, sum;
	cin >> m >> n;
	if(m % 2 == 0) {
		p = m + 1;
	}else {
		p = m;
	}
	if(n % 2 == 0) {
		q = n - 1;
	}else {
		q = n;
	}
	sum = 0;
	for(int i = p; i <= q; i = i + 2) {
		sum = sum + i;
	}
	cout << sum << endl;
	return 0;
}
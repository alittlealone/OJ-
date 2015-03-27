/**
** I want to be one of the greats.
**/

#include <iostream>
using namespace std;

int main() {
	int l, m, p, q, a[10001];
	int sum = 0;
	cin >> l >> m;
	for(int i = 0; i <= l; i++) {
		a[i] = 1;
	}
	for(int i = 0; i < m; i++) {
		cin >> p >> q;
		for(int j = p; j <= q; j++) {
			a[j] = 0;
		}
	}
	for(int i = 0; i <= l; i++) {
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
} 
#include <iostream>
using namespace std;

int t(int p, int q) {
	int i = 1;
	while(p > 0) {
		if(p >= 1000000) p = 1000000;
		p = p - q;
		if(p <= 0) break;
		q = q * 1.05;
		p = p * 2;
		i++;
	}
	return i;
}

int main() {
	int n, p, q;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> p >> q;
		cout << t(p, q) << endl;
	}
	return 0;
} 
#include <iostream>
using namespace std;

int main() {
	int n, m, a[100];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m;
		a[i] = m;
	}
	for(int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}
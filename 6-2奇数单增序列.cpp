#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, a[500], b[500];
	int j = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] % 2 != 0) {
			b[j++] = a[i];
		}
	}
	sort(b, b + j);
	for(int k = 0; k < j - 1; k++) {
		cout << b[k] << ",";
	}
	cout << b[j - 1];
	return 0;
}
#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[101] = {0};
	for(int i = 0; i < n; i++) {
		int c;
		cin >> c;
		a[i] = c;
	}
	for(int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
} 
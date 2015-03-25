#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, x, y, z;
	cin >> n;
	a = b = c = 0;
	for(int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		a = a + x;
		b = b + y;
		c = c + z;
	}
	cout << a << " " << b << " " << c << " " << a + b + c << endl;
	return 0;
} 
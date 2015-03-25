#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, x, y, l;
	cin >> n >> x >> y;
	l = n - ceil(double(y) / double(x));
	if(l >= 0) {
		cout << l << endl;
	}else {
		cout << 0 << endl;
	}
	return 0;
}
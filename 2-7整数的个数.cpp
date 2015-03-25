#include <iostream>
using namespace std;

int main() {
	int k, m, a, b, c;
	a = b = c = 0;
	cin >> k;
	for(int i = 0; i < k; i++) {
		cin >> m;
		if(m == 1) a++;
		if(m == 5) b++;
		if(m == 10) c++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
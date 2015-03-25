#include <iostream>
using namespace std;

int main() {
	double h;
	cin >> h;
	double d = h;
	for(int i = 2; i <= 10; i++) {
		d = d + h;
		h = h / 2;
	}
	cout << d << endl;
	cout << h / 2 << endl;
	return 0;
}
#include <iostream>
using namespace std;

char run(int a) {
	return (a % 4 != 0 || (a % 100 == 0 && a % 400 != 0) || a % 3200 == 0) ? 'N' : 'Y';
}

int main() {
	int a;
	cin >> a;
	cout << run(a);
	return 0;
}
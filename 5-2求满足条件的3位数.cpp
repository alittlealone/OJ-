#include <iostream>
#include <math.h>
using namespace std;

bool pingfang(int i) {
	if(sqrt(i) - (int)sqrt(i) == 0) {
		return true;
	}
	return false;
}

int xiangtong(int i) {
	int a, b, c, x;
	x = 0;
	a = i / 100;
	b = i % 100 / 10;
	c = i % 10;
	if(a == b) x++;
	if(a == c) x++;
	if(b == c) x++;
	return x; 
}

int main() {
	int n, j = 0, a[1000] = {0};
	cin >> n;
	for(int i = 11; i < 1000; i++) {
		if(pingfang(i) && xiangtong(i) >= 1) {
			a[j++] = i;
		}
	}
	cout << a[n - 1] << endl;
	return 0;
}
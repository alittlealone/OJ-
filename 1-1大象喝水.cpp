#include <iostream>
#include <math.h>
using namespace std;

#define pi 3.14159

int main() {
	int h, r;
	cin >> h >> r;
	cout << ceil(20000 / (pi * r * r * h)) << endl;
	return 0;
}
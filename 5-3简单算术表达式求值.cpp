/**
** I want to be one of the greats.
**/

#include <iostream>
using namespace std;

int main() {
	int n, m;
	char s;
	cin >> n >> s >> m;
	if(s == '+') cout << m + n << endl;
	if(s == '-') cout << n - m << endl;
	if(s == '*') cout << n * m << endl;
	if(s == '/') cout << n / m << endl;
	if(s == '%') cout << n % m << endl;
	return 0;
} 
#include <iostream>
using namespace std;

//辗转相除求最大公约数
//x, y顺序不影响结果 
int yu(int x, int y) {
	int r = x % y;
	while(r != 0) {
		x = y;
		y = r;
		r = x % y;
	}
	return y;
}

int main() {
	int n, x, y, p, q, temp;
	p = q = y = 1;
	x = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		//处理输入中的其他字符 
		char slash;
		cin >> p >> slash >> q;
		temp = y;
		y = q * y;
		x = temp * p + x * q;
	}
	if(y / yu(x, y) != 1) {
		cout << x / yu(x, y) << "/" << y / yu(x, y) << endl; 
	}else {
		cout << x / y << endl;
	}
	return 0;
}
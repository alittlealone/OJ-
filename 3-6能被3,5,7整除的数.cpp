#include <iostream>
using namespace std;

int main() {
	int n, a[3];
	while(cin >> n) {
		a[0] = a[1] = a[2] = 0;
		if(n % 3 == 0) a[0] = 3;
		if(n % 5 == 0) a[1] = 5;
		if(n % 7 == 0) a[2] = 7;
		if(a[1] + a[2] + a[0] != 0) {
			for(int i = 0; i < 3; i++) {
				if(a[i] != 0) cout << a[i] << " ";
			}
		}else {
			cout << "n";
		}
		cout << endl;
	}
	return 0;
} 
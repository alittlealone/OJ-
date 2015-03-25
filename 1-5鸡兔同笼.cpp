#include <iostream>
using namespace std;

int main() {
	int n, m, min, max;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m;
		if(m % 2 != 0) {
			min = 0; 
			max = 0;
		}else if(m % 4 == 0) {
			min = m / 4;
			max = m / 2;
		}else {
			min = m / 4 + 1;
			max = m / 2;
		}
		cout << min << " " << max << endl;
	}
	return 0;
}
#include <iostream> 
#include <algorithm>
using namespace std;

int main() {
	int a[10];
	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9]) {
		sort(a, a + 10);
		for(int i = 9; i >=0; i--) {
			if(a[i] % 2 != 0) {
			cout << a[i] << " "; 
			}
		}
		for(int i = 0; i < 10; i++) {
			if(a[i] % 2 == 0) {
			cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
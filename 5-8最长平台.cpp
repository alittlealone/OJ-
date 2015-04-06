#include <iostream>

using namespace std;

int main() {
	int n;
	while(cin >> n && n) {
		int a[100] = {0};
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int m, mm = 1;
		for(int i = 0; i < n; i++) {
			m = 1;
			for(int j = i + 1; j < n; j++) {
				if(a[j] == a[i]) m++;
				else{
					if(m > mm) mm = m;
					i = j - 1;
					break;
				}
			}
		}
		cout << mm << endl;
	}
	return 0;
}
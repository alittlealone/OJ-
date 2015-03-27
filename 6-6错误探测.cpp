/**
** I want to be one of the greats.
**/

#include <iostream>
 using namespace std;
 
 int main() {
 	int n, a[100][100], x, y;
 	while(cin >> n && n) {
 		int h[100] = {0};
 		int l[100] = {0};
 		int sumh = 0;
 		int suml = 0;
	 	for(int p = 0; p < n; p++) {
	 		for(int q = 0; q < n; q++) {
		 		cin >> a[p][q];
		 		h[p] = h[p] + a[p][q];
		 	}
		 	if(h[p] % 2 != 0) {
 				h[p] = 0;
	 		} else {
 				h[p] = 1;
	 		}
	 	}
	 	for(int q = 0; q < n; q++) {
	 		for(int p = 0; p < n; p++) {
		 		l[q] = l[q] + a[p][q];
		 	}
		 	if(l[q] % 2 != 0) {
	 			l[q] = 0;
	 		} else {
		 		l[q] = 1;
		 	}
	 	}
	 	for(int p = 0; p < n; p++) {
	 		sumh += h[p];
	 	}
	 	for(int q = 0; q < n; q++) {
 				suml += l[q];
 		}
 		if(sumh == n && suml == n) {
 			cout << "OK" << endl;
 		}else if(sumh == n - 1 && suml == n - 1) {
		 	for(int p = 0; p < n; p++) {
	 			if(h[p] == 0) x = p + 1;
	 		}
	 		for(int q = 0; q < n; q++) {
		 		if(l[q] == 0) y = q + 1;
		 	}
		 	cout << "Change bit (" << x << "," << y << ")" << endl;
	 	}else {
	 		cout << "Corrupt" << endl;
	 	}
	 }
	 return 0;
 } 
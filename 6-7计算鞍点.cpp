/**
** I want to be one of the greats.
**/

#include <iostream>
using namespace std;

int main() {
	int flag = 0;
	int a[5][5];
	int max[5];
	int maxl[5];
	int min[5];
	for(int i = 0; i < 5; i++) {
		maxl[i] = 0;
		max[i] = 0;
		for(int j = 0; j < 5; j++) {
			cin >> a[i][j];
			if(a[i][j] > max[i]) {
				max[i] = a[i][j];
				maxl[i] = j;
			}
		}
	}
	for(int j = 0; j < 5; j++) {
		min[j] = a[0][j];
		for(int i = 0; i < 5; i++) {
			if(a[i][j] < min[j]) {
				min[j] = a[i][j];
			}
		}
	}	
	for(int i = 0; i < 5; i++) {
		if(max[i] == min[maxl[i]]) {
			flag = 1;
			cout << i + 1 << " " << maxl[i] + 1 << " " << max[i] << endl;
		}
	}
	if(!flag) {
		cout << "not found" << endl;
	}		
	return 0;
}
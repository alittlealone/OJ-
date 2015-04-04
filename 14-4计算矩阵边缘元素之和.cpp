#include <iostream>

using namespace std; 

int  main() {
	int k;
	cin >> k;
	for(int z = 0; z < k; z++) {
		int a[101][101] = {0};
		int row,col;
		cin >> row >> col;
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < col; j++) {
				int c;
				cin >> c;
				a[i][j] = c;
			}
		}
		int h, hh, l, ll;
		h = hh = l = ll = 0;
		for(int j = 0; j < col; j++) {
			h += a[0][j];
			hh += a[row - 1][j];
		}
		for(int i = 0; i < row; i++) {
			l += a[i][0];
			ll += a[i][col - 1];
		}
		if(row != 1 && col != 1)
			cout << h + hh + l + ll - a[0][0] - a[row - 1][0] - a[0][col - 1] - a[row - 1][col - 1]<< endl;
		else if(row == 1) 
			cout << h << endl;
		else if(col == 1)
			cout << l << endl;
	}
	return 0;
}
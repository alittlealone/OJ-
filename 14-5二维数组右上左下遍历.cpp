#include <iostream>

using namespace std; 

int main() {
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
	for(int k = 2; k <= row + col; k++) {
		for(int i = 0; k - 2 - i >= 0 && i < row; i++) {
			if(k - 2 -i >= col) continue;
			else cout << a[i][k - 2 - i] << endl;
		}
	}
	return 0;
}
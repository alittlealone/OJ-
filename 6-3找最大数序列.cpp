/**
** I want to be one of the greats.
**/

#include <iostream>
using namespace std;

int main() {
	int n, maxi, flag, max[30];
	char c;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int j = 0;
		unsigned a[100] = {0};
		//cin不会读入回车，所以不能直接cin>>c判断c是否是回车
		//cin.get可以输入回车，将其换成ascii码形式
		//换行ascii码为10，回车为13 ；回车是回到本行开头，换行是到下行开头 
		while(1) {
			cin >> a[j];
			cin.get(c);
			if((int)c == 10) break;
			j++;
		}
		max[i] = a[0];
		for(int p = 0; p <= j; p++) {
			for(int q = p + 1; q <= j; q++) {
				if(a[q] > max[i]) {
					max[i] = a[q];
				}
			}
		}
	}
	maxi = max[0];
	for(int i = 1; i < n; i++) {
		if(max[i] > maxi) {
			maxi = max[i];
		}
	}
	cout << maxi << endl;
	flag = 0;
	for(int i = 0; i < n; i++) {
		if(max[i] == maxi) {
			flag++;
		}
	}
	for(int i = 0; i < n; i++) {
		if(max[i] == maxi) {
			flag--;
			if(flag) {
				cout << i + 1 << ",";
			}else {
				cout << i + 1;
			}
		} 
	}
	return 0;
}
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
		//cin�������س������Բ���ֱ��cin>>c�ж�c�Ƿ��ǻس�
		//cin.get��������س������任��ascii����ʽ
		//����ascii��Ϊ10���س�Ϊ13 ���س��ǻص����п�ͷ�������ǵ����п�ͷ 
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
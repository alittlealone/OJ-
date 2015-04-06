#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	vector<int> v7, v9;
	vector<int>::reverse_iterator rit;
	for(int i = 49; i < 820; i++) {
		int p = i;
		int q = i;
		while(p) {
			v7.push_back(p % 7);
			p = p / 7;
		}
		while(q) {
			v9.push_back(q % 9);
			q = q / 9;
		}
		if(v7.size() == 3 && v9.size() == 3 && v7[0] == v9[2] && v7[1] == v9[1] && v7[2] == v9[0]) {
			m = i;		
			break;
		}
		v7.clear();
		v9.clear();
	}
	cin >> n;
	if(n == 1) cout << m << endl;
	else if(n == 2) {
		for(rit = v7.rbegin(); rit != v7.rend(); rit++) {
			cout << *rit;
		}
		cout << endl;
	}else if(n == 3) {
		for(rit = v9.rbegin(); rit != v9.rend(); rit++) {
			cout << *rit;
		}
		cout << endl;
	}
	return 0;
} 
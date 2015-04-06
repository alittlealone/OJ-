#include <iostream>
#include <map>

using namespace std;

int main() {
	int z, q, s, l, flag = 0;
	for(int i = 1; i <= 5; i++) {
		z = i * 10;
		for(int j = 3; j <= 5; j++) {
			q = j * 10;
			for(int k = 1; k <= 5; k++) {
				s = k * 10;
				for(int t = 1; t <= 5; t++) {
					l = t * 10;
					if(z + q == s + l && z + l > s + q && z + s < q) {
						flag = 1;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;
		}
		if(flag) break;
	} 
	map<int, char> m;
	m[z] = 'z';
	m[q] = 'q';
	m[s] = 's';
	m[l] = 'l';
	map<int, char>::iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		cout << (*it).second << " " << (*it).first << endl;
	}
	return 0;
}
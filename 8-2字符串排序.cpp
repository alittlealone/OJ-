#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	string s;
	vector<string> v;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cin >> n;
		for(int j = 0; j <= n; j++) {
			//cin >> s;
			getline(cin, s);
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		for(int j = 1; j <= n; j++) {
			cout << v[j] << endl;
		}
		cout << endl;
		v.clear();
	}
	return 0;
}
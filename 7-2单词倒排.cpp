#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	string s;
	vector<string> v;
	getline(cin, s);
	string pattern = " ";
	s = s + pattern;
	for(int i = 0; i < s.size(); i++) {
		int pos = s.find(pattern, i);
		if(pos < s.size()) {
			string ss = s.substr(i, pos - i);
			v.push_back(ss);
			i = pos + pattern.size() - 1;
		}
	}
	vector<string>::reverse_iterator rit;
	for(rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << " ";
	}
	cout << endl;
	return 0;
}

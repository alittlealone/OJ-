#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char c;
	string s; 
	vector<string> v;
	while(1) {
		cin >> s;
		v.push_back(s);
		c = getchar();
		if(c == '\n') break;
		else continue;
	}
	sort(v.begin(), v.end());
	vector<string>::iterator it;
	it = unique(v.begin(), v.end());
	v.erase(it, v.end()); 
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}
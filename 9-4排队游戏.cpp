/**
** Fighting for Standford
**/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	char b, g;
	string s;
	cin >> s;
	b = s[0];
	string::iterator it;
	for(it = s.begin(); it != s.end(); it++) {
		if(*it != b) {
			g = *it;
			break;
		}
	} 
	vector<int> B, G;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == b) B.push_back(i);
		else G.push_back(i);
	}
	vector<int>::iterator itg;
	vector<int>::reverse_iterator itb;
	for(itg = G.begin(); itg != G.end(); itg++) {
		for(itb = B.rbegin(); itb != B.rend(); itb++) {
			if(*itb < *itg) {
				cout << *itb << " " << *itg << endl;
				*itb = 200;
				break;
			}
		}
	}
	return 0;
}
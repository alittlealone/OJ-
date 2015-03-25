#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;

typedef struct {
	string s;
	double g;
}Student;

bool cmp(Student x, Student y) {
	return x.g > y.g;
}

int main() {
	Student s[100];
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> s[i].s >> s[i].g;
	}
	sort(s, s + n, cmp);
	//for(int i = 0; i < n; i++) {
		//cout << s[i].s << " " << s[i].g << endl;
	//}
	cout << s[k - 1].s << " " << s[k - 1].g << endl;
	return 0;
}
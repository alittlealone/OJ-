#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m;
		if(m > 100) cout << "Bike" << endl;
		else if(m < 100) cout << "Walk" << endl;
		else cout << "All" << endl;
	}
	return 0;
}
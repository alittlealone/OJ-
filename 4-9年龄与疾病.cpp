#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, m;
	int b[4] = {0};
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> m;
		if(m >= 1 && m <= 18) {
			b[0]++;
		}else if(m >= 19 && m <= 35) {
			b[1]++;
		}else if(m >= 36 && m <= 60) {
			b[2]++;
		}else if(m >= 61) {
			b[3]++;
		}
	}
	cout << "1-18: " << fixed << setprecision(2) << 100 * b[0] / double(n) << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << 100 * b[1] / double(n) << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << 100 * b[2] / double(n) << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << 100 * b[3] / double(n) << "%" << endl;
	return 0;
}
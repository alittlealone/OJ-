#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double modified(double n) {
	if(fabs(n) > 1e-5) return n;
	else return 0;
} 

int main() {
	int n;
	double a, b, c, x1, x2, x, y;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if(b*b-4*a*c >= 0) {
			x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	 		x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	 		if(fabs(x1 - x2) < 1e-5) {
		 		cout << "x1=x2=" << fixed << setprecision(5) << modified(x1) << endl;
		 	}else {
	 			cout << "x1=" << fixed << setprecision(5) << modified(x1) << ";x2=" << modified(x2) << endl;
	 		}
		}else {
			x = -b / (2 * a);
			y = sqrt(-b*b+4*a*c) / (2*a);
			if(a > 0) {
				cout << "x1=" << fixed << setprecision(5) << modified(x) << "+" << modified(y) << "i;x2=" << modified(x) << "-" << modified(y) << "i" << endl;
			}else {
				cout << "x1=" << fixed << setprecision(5) << modified(x) << "+" << -modified(y) << "i;x2=" << modified(x) << modified(y) << "i" << endl;
			}
		}	
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int A, B, C, a, b, c, f = 0;
	for(A = 0; A <= 2; A++) {
		for(B = 0; B <= 2; B++) {
			for(C = 0; C <= 2; C++) {
				a = (B > A) + (C == A);
				b = (A > B) + (A > C);
				c = (C > B) + (B > A);
				if(C<B && B<A && c>b && b>a) {
					f = 1;
					cout << "CBA" << endl;
					break;
				}
				if(C<A && A<B && c>a && a>b) {
					f = 1;
					cout << "CAB" << endl;
					break;
				}
				if(B<A && A<C && b>a && a>c) {
					f = 1;
					cout << "BAC" << endl;
					break;
				}
				if(B<C && C<A && b>c && c>a) {
					f = 1;
					cout << "BCA" << endl;
					break;
				}
				if(A<B && B<C && a>b && b>c) {
					f = 1;
					cout << "ABC" << endl;
					break;
				}
				if(A<C && C<B && a>c && c>b) {
					f = 1;
					cout << "ACB" << endl;
					break;
				}
			}
			if(f) break; 
		}
		if(f) break;
	}
	return 0;
}
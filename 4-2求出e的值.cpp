/*************************************************************************
	> File Name: e.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015��03��18�� ������ 14ʱ18��44��
 ************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

double jiecheng(int i) {
    double e;
    if(i == 1) e = 1;
    else e = i * jiecheng(i - 1);
    return e;
}

int main() {
    int n;
    double e = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        e = e + double(1) / jiecheng(i);
    }
    cout << fixed << setprecision(10) << e << endl;
    return 0;
}
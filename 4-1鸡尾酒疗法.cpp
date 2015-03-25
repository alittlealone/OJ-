/*************************************************************************
	> File Name: jiweijiu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月18日 星期三 13时55分54秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double p, q, x, y;
    cin >> p >> q;
    x = q / p;
    for(int i = 1; i < n; i++) {
        cin >> p >> q;
        y = q / p;
        if(y - x > 0.05) cout << "better" << endl;
        if(x - y > 0.05) cout << "worse" << endl;
        if(y - x <= 0.05 && y - x >= -0.05) cout << "same" << endl;
    }
    return 0;
}
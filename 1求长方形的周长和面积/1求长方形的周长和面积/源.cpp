#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	int l, w, c, s;
	cin >> l >> w;
	c = 2 * (l + w);
	s = l * w;
	cout << c << endl << s << endl;
	return 0;
}
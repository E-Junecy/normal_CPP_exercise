#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	short x, a, b, c, d, n;
	cin >> x;
	a = x / 1000;
	b = x / 100 % 10;
	c = x % 100 / 10;
	d = x % 10;
	n = 1000 * d + 100 * c + 10 * b + a;
	cout << n << endl;
	return 0;
}
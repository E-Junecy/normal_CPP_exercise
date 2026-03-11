#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main() {
	int x, a, b, c, d, e, f;
	cin >> x;
	a = x / 100000;
	b = x / 10000 % 10;
	c = x / 1000 % 10;
	d = x % 1000 / 100;
	e = x % 100 / 10;
	f = x % 10;
	a == f && b == e && c == d ? cout << "Y" << endl : cout << "N" << endl;
}
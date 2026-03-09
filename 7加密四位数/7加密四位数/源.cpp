#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	short x, a, b, c, d, n;
	cin >> x;
	a = x / 1000; a = (a + 5) % 10;
	b = x / 100 % 10; b = (b + 5) % 10;
	c = x % 100 / 10; c = (c + 5) % 10;
	d = x % 10; d = (d + 5) % 10;
	n = 1000 * d + 100 * c + 10 * b + a;
	cout << n << endl;
	return 0;
}
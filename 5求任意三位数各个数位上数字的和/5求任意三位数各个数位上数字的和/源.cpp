#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	short x, a, b, c;
	cin >> x;
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	cout << a + b + c << endl;
	return 0;
}